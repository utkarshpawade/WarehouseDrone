from setuptools import find_packages
from setuptools import setup

setup(
    name='swift_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('swift_msgs', 'swift_msgs.*')),
)
