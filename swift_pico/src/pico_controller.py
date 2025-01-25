#!/usr/bin/env python3
'''
# Team ID:          WD#2061
# Theme:            WAREHOUSE DRONE
# Author List:      Ayush Kumar, Utkarsh Pawade, Prakshit Suthar, Harsh Kaldoke
# Filename:         WD_2061_pico_controller.py
# Functions:        _init_, disarm, arm, whycon_callback, altitude_set_pid, pitch_set_pid, roll_set_pid, pid, main
# Global variables:  None
'''



'''
This python file runs a ROS 2-node of name pico_control which holds the position of Swift Pico Drone on the given dummy.
This node publishes and subsribes the following topics:

		PUBLICATIONS			SUBSCRIPTIONS
		/drone_command			/whycon/poses
		/pid_error			/throttle_pid
						/pitch_pid
						/roll_pid
					
Rather than using different variables, use list. eg : self.setpoint = [1,2,3], where index corresponds to x,y,z ...rather than defining self.x_setpoint = 1, self.y_setpoint = 2
CODE MODULARITY AND TECHNIQUES MENTIONED LIKE THIS WILL HELP YOU GAINING MORE MARKS WHILE CODE EVALUATION.	
'''

# Importing the required libraries

from swift_msgs.msg import SwiftMsgs
from geometry_msgs.msg import PoseArray
from pid_msg.msg import PIDTune, PIDError
import rclpy
from rclpy.node import Node


class Swift_Pico(Node):
	def __init__(self):
		'''
		Purpose:
		---
		Initializes the ROS2 node and all necessary variables and subscriptions/publishers.

		Input Arguments:
		---
		None

		Returns:
		---
		None

		Example call:
		---
		swift_pico = Swift_Pico()
		'''
		super().__init__('pico_controller')  # initializing ros node with name pico_controller

		# This corresponds to your current position of drone. This value must be updated each time in your whycon callback
		# [x,y,z]
		self.drone_position = [0.0, 0.0, 0.0]

		# [x_setpoint, y_setpoint, z_setpoint]
		self.setpoint = [2, 2, 19]  # whycon marker at the position of the dummy given in the scene. Make the whycon marker associated with position_to_hold dummy renderable and make changes accordingly

		# Declaring a cmd of message type swift_msgs and initializing values
		self.cmd = SwiftMsgs()
		self.cmd.rc_roll = 1500 # Initialize roll control signal to mid-value
		self.cmd.rc_pitch = 1500  # Initialize pitch control signal to mid-value
		self.cmd.rc_yaw = 1500 # Initialize yaw control signal to mid-value
		self.cmd.rc_throttle = 1500 # Initialize throttle control signal to mid-value

		#initial setting of Kp, Kd and ki for [roll, pitch, throttle]. eg: self.Kp[2] corresponds to Kp value in throttle axis
		#after tuning and computing corresponding PID parameters, change the parameters
		# PID gains for [roll, pitch, throttle]
		

		self.Kp = [15, 15, 27] # Proportional gains for roll, pitch, throttle
		self.Ki = [0, 0, 0.008] # Integral gains for roll, pitch, throttle
		self.Kd = [900, 900, 1000] # Derivative gains for roll, pitch, throttle
		
		 # Initializing error variables
		self.error = [0,0,0] # Current error in [roll, pitch, throttle]
		self.sum_error = [0,0,0] # Sum of errors for integral component
		self.diff_error = [0,0,0] # Difference in error for derivative component
		self.prev_error = [0,0,0] # Previous error values

		# Sample time for the PID loop, in seconds
	
		self.sample_time = 0.050  # in seconds

		# Publishing /drone_command, /pid_error
		self.command_pub = self.create_publisher(SwiftMsgs, '/drone_command', 10)
		self.pid_error_pub = self.create_publisher(PIDError, '/pid_error', 10)

		self.pid_error = PIDError() # PID error message instance
		#------------------------Add other ROS 2 Publishers here-----------------------------------------------------
	

		# Subscribing to /whycon/poses, /throttle_pid, /pitch_pid, roll_pid
		self.create_subscription(PoseArray, '/whycon/poses', self.whycon_callback, 1)
		self.create_subscription(PIDTune, "/throttle_pid", self.altitude_set_pid, 1)

		self.create_subscription(PIDTune, "/pitch_pid", self.pitch_set_pid, 1)
		self.create_subscription(PIDTune, "/roll_pid", self.roll_set_pid, 1)


		#------------------------Add other ROS Subscribers here-----------------------------------------------------
	

		self.arm()  # ARMING THE DRONE

		# Creating a timer to run the pid function periodically, refer ROS 2 tutorials on how to create a publisher subscriber(Python)

		self.timer = self.create_timer(self.sample_time,self.pid)

	def disarm(self):
		'''
		Purpose:
		---
		Disarms the drone by setting control signals to minimum values.

		Input Arguments:
		---
		None

		Returns:
		---
		None

		Example call:
		---
		self.disarm()
		'''
		# Set all channels to minimum values
		self.cmd.rc_roll = 1000
		self.cmd.rc_yaw = 1000
		self.cmd.rc_pitch = 1000
		self.cmd.rc_throttle = 1000
		self.cmd.rc_aux4 = 1000
		self.command_pub.publish(self.cmd)
		

	def arm(self):
		'''
		Purpose:
		---
		Arms the drone by setting control signals to neutral values.

		Input Arguments:
		---
		None

		Returns:
		---
		None

		Example call:
		---
		self.arm()
		'''
		self.disarm() # First disarm the drone
		self.cmd.rc_roll = 1500
		self.cmd.rc_yaw = 1500
		self.cmd.rc_pitch = 1500
		self.cmd.rc_throttle = 1500
		self.cmd.rc_aux4 = 2000 # Set AUX4 to 2000 to arm the drone
		self.command_pub.publish(self.cmd)  # Publishing /drone_command


	# Whycon callback function
	# The function gets executed each time when /whycon node publishes /whycon/poses 
	def whycon_callback(self, msg):
		'''
		Purpose:
		---
		Callback function that updates the drone's position based on the /whycon/poses topic.

		Input Arguments:
		---
		msg : [ PoseArray ]
			Pose array message containing the drone's current position.

		Returns:
		---
		None

		Example call:
		---
		self.whycon_callback(msg)
		'''
		self.drone_position[0] = msg.poses[0].position.x # Update drone x-position
		self.drone_position[1] = msg.poses[0].position.y # Update drone y-position
		self.drone_position[2] = msg.poses[0].position.z + 1 # Update drone z-position
		#--------------------Set the remaining co-ordinates of the drone from msg----------------------------------------------

	# Callback function for /throttle_pid
	# This function gets executed each time when /drone_pid_tuner publishes /throttle_pid
	def altitude_set_pid(self, alt):
		'''
		Purpose:
		---
		Callback function to update the PID gains for altitude control based on /throttle_pid topic.

		Input Arguments:
		---
		alt : [ PIDTune ]
			PID tune message containing the new PID gains for throttle (altitude control).

		Returns:
		---
		None

		Example call:
		---
		self.altitude_set_pid(alt)
		'''
		self.Kp[2] = alt.kp * 0.03  # This is just for an example. You can change the ratio/fraction value accordingly
		self.Ki[2] = alt.ki * 0.008
		self.Kd[2] = alt.kd * 0.6

	#----------------------------Define callback function like altitide_set_pid to tune pitch, roll--------------
	def pitch_set_pid(self, pitch):
		'''
		Purpose:
		---
		Callback function to update the PID gains for pitch control based on /pitch_pid topic.

		Input Arguments:
		---
		pitch : [ PIDTune ]
			PID tune message containing the new PID gains for pitch control.

		Returns:
		---
		+None

		Example call:
		---
		self.pitch_set_pid(pitch)
		'''
		self.Kp[1] = pitch.kp * 0.03  
		self.Ki[1] = pitch.ki * 0.008
		self.Kd[1] = pitch.kd * 0.6
	
	def roll_set_pid(self, roll):
		'''
		Purpose:
		---
		Callback function to update the PID gains for roll control based on /roll_pid topic.

		Input Arguments:
		---
		roll : [ PIDTune ]
			PID tune message containing the new PID gains for roll control.

		Returns:
		---
		None

		Example call:
		---
		self.roll_set_pid(roll)
		'''
		self.Kp[0] = roll.kp * 0.03  
		self.Ki[0] = roll.ki * 0.008
		self.Kd[0] = roll.kd * 0.6
	#----------------------------------------------------------------------------------------------------------------------


	def pid(self):
		'''
		Purpose:
		---
		Computes the PID control for roll, pitch, and throttle, and publishes the commands.

		Input Arguments:
		---
		None

		Returns:
		---
		None

		Example call:
		---
		self.pid()
		'''
	
        # Loop through roll, pitch, and throttle (indices 0, 1, 2)
		for i in range(3):

			self.error[i] = self.drone_position[i] - self.setpoint[i]
			self.sum_error[i] += self.error[i]
			self.diff_error[i] = self.error[i] - self.prev_error[i]
			self.prev_error[i] = self.error[i]

		# Set throttle error in the PID error message
		self.pid_error.throttle_error = self.error[2]
		self.pid_error.pitch_error = self.error[1]
		self.pid_error.roll_error = self.error[0]
		


		# Corrected PID calculation for throttle (z-axis)
		self.throttle = (self.Kp[2] * self.error[2] + 
						self.Ki[2] * self.sum_error[2] + 
						self.Kd[2] * self.diff_error[2])
		
		


		self.roll =  (self.Kp[0] * self.error[0] + 
						self.Ki[0] * self.sum_error[0] + 
						self.Kd[0] * self.diff_error[0])
					 
		
		
		self.pitch = (self.Kp[1] * self.error[1] + 
						self.Ki[1] * self.sum_error[1] + 
						self.Kd[1] * self.diff_error[1])
		

		# Adjust throttle command and limit it between 1000 and 2000
		
		self.cmd.rc_roll = max(min(int(1500 - self.roll), 2000), 1000)
		self.cmd.rc_pitch = max(min(int(1500 + self.pitch), 2000), 1000)


		self.cmd.rc_throttle = int(1500 + self.throttle)



		if self.cmd.rc_throttle > 2000:
			self.cmd.rc_throttle = 2000
		elif self.cmd.rc_throttle < 1000:
			self.cmd.rc_throttle = 2000

	# Publish the command
		self.command_pub.publish(self.cmd)
		# calculate throttle error, pitch error and roll error, then publish it accordingly
		self.pid_error_pub.publish(self.pid_error)



def main(args=None):
	'''
	Purpose:
	---
	Initialize the rclpy and run the Swift_Pico node.

	Input Arguments:
	---
	None

	Returns:
	---
	None

	Example call:
	---
	main()
	'''
	rclpy.init(args=args)
	swift_pico = Swift_Pico()
	rclpy.spin(swift_pico)
	# Destroy the node explicitly
	swift_pico.destroy_node()
	rclpy.shutdown()


if __name__ == '__main__':
	main()