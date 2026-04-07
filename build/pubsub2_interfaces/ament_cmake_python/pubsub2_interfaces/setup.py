from setuptools import find_packages
from setuptools import setup

setup(
    name='pubsub2_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('pubsub2_interfaces', 'pubsub2_interfaces.*')),
)
