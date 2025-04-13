from setuptools import find_packages, setup

package_name = 'my_first_ros_rclpy_pkg'

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
    maintainer='jungseong',
    maintainer_email='jungseonglian@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            # 각 모듈의 main 함수를 호출. ros2 run & ros2 launch를 이용해 해당 스크립트를 실행할 수 있다
            'helloworld_publisher = my_first_ros_rclpy_pkg.helloworld_publisher:main',
            'helloworld_subscriber = my_first_ros_rclpy_pkg.helloworld_subscriber:main',
        ],
    },
)
