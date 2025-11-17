from setuptools import find_packages
from setuptools import setup

setup(
    name='radar_simulator',
    version='0.0.0',
    packages=find_packages(
        include=('radar_simulator', 'radar_simulator.*')),
)
