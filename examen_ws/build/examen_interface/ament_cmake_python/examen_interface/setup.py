from setuptools import find_packages
from setuptools import setup

setup(
    name='examen_interface',
    version='0.0.0',
    packages=find_packages(
        include=('examen_interface', 'examen_interface.*')),
)
