from setuptools import find_packages
from setuptools import setup

setup(
    name='dca1000',
    version='0.0.0',
    packages=find_packages(
        include=('dca1000', 'dca1000.*')),
)
