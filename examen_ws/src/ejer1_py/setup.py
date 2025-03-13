from setuptools import find_packages, setup

package_name = 'ejer1_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools', 'rclpy', 'std_msgs'],  # Agregamos las dependencias
    zip_safe=True,
    maintainer='rod-0310',
    maintainer_email='frodriguezcopa@gmail.com',
    description='Publicador y suscriptor en ROS 2 con valores booleanos',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'publicador = ejer1_py.publicador:main',  # Añadir el nodo publicador
            'suscriptor = ejer1_py.suscriptor:main',  # Añadir el nodo suscriptor
        ],
    },
)
