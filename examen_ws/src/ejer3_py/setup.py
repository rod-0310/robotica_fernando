from setuptools import find_packages, setup

package_name = 'ejer3_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rod-0310',
    maintainer_email='frodriguezcopa@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "KinematicsClient = ejer3_py.cliente:main",
            "KinematicsServer = ejer3_py.servidor:main",
        ],
    },
)
