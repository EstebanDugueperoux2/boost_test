# boost_test

conan new boost_test/0.0.1 --template=cmake_exe

NOTE: Official Conan Docker images provides a arm tool chain (crossbuild-essential-armhf) too old to make cross compile of boost
#docker run --rm -ti -v ${PWD}:/home/conan/project conanio/gcc8-ubuntu18.04
#sudo apt -y update && sudo apt install -y crossbuild-essential-armhf
#cd project

docker run --rm -ti -v ${PWD}:/home/conan/project debian:bullseye
apt -y update && apt install -y crossbuild-essential-armhf python3-pip cmake
pip3 install conan
cd /home/conan/project/

conan create . --profile:build .conan/profiles/gcc10 --profile:host .conan/profiles/gcc10 --build missing  -c tools.system.package_manager:mode=install -c tools.system.package_manager:sudo=True

conan create . --profile:build .conan/profiles/gcc10 --profile:host .conan/profiles/linux-armv7hf-gcc10 --build missing  -c tools.system.package_manager:mode=install -c tools.system.package_manager:sudo=True