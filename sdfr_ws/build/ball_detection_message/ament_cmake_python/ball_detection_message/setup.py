from setuptools import find_packages
from setuptools import setup

setup(
    name='ball_detection_message',
    version='1.0.0',
    packages=find_packages(
        include=('ball_detection_message', 'ball_detection_message.*')),
)
