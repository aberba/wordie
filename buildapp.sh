clear
sudo rm -rf build/
echo "build dir removed"

mkdir build
cd build

cmake -DCMAKE_INSTALL_PREFIX=/usr ../
make
echo "make finished"

sudo make install