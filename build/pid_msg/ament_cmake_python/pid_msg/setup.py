from setuptools import find_packages
from setuptools import setup

setup(
    name='pid_msg',
    version='0.0.0',
    packages=find_packages(
        include=('pid_msg', 'pid_msg.*')),
)
