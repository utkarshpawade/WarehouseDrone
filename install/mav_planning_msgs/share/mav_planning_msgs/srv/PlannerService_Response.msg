
# True on success, false on planning failure
bool success
# Either contains a polynomial trajectory:
mav_planning_msgs/PolynomialTrajectory polynomial_plan
mav_planning_msgs/PolynomialTrajectory4D polynomial_plan_4d
# or a MultiDOFJointTrajectory containing a sampled path (or straight-line
# waypoints, depending on the planner).
# Only one of these should be non-empty.
trajectory_msgs/MultiDOFJointTrajectory sampled_plan
