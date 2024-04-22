from setuptools import find_packages
from setuptools import setup

setup(
    name='robot_image_messages',
    version='1.0.0',
    packages=find_packages(
        include=('robot_image_messages', 'robot_image_messages.*')),
)
