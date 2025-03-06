from setuptools import find_packages
from setuptools import setup

setup(
    name='recursos',
    version='0.0.0',
    packages=find_packages(
        include=('recursos', 'recursos.*')),
)
