from setuptools import find_packages, setup

package_name = 'ejer2_py'

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
            "sensor_1 = ejer2_py.nodo1:main",
            "sensor_2 = ejer2_py.nodo2:main",
            "sensor_3 = ejer2_py.nodo3:main",
            "sensor_prom = ejer2_py.nodo4:main",
            "filtro = ejer2_py.nodo5:main",
        ],
    },
)
