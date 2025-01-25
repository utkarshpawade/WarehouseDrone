from setuptools import find_packages
from setuptools import setup

setup(
    name='waypoint_navigation',
    version='0.0.1',
    packages=find_packages(
        include=('waypoint_navigation', 'waypoint_navigation.*')),
)
