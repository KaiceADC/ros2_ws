from setuptools import setup, find_packages

package_name = 'radar_simulator'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='your_email@example.com',
    description='RSV82 Radar Simulator for ROS 2 Humble',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'radar_pub=radar_simulator.radar_publisher:main',
            'radar_sub=radar_simulator.radar_subscriber:main',
            'radar_pub_v2=radar_simulator.radar_publisher_enhanced:main',
            'radar_sub_v2=radar_simulator.radar_subscriber_enhanced:main',
        ],
    },
)
