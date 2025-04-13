from setuptools import find_packages
from setuptools import setup

setup(
    name='msg_srv_action_interface_example',
    version='0.0.0',
    packages=find_packages(
        include=('msg_srv_action_interface_example', 'msg_srv_action_interface_example.*')),
)
