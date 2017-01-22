#!/bin/sh
sudo apt-get install -y libfuse-dev
git clone https://github.com/gittup/tup.git
cd tup
./bootstrap.sh
sudo cp build/tup /usr/bin/
cd ..
rm -rf tup
# The following line is needed for some linux destributions, including debian jessie
#sudo chmod u+s /usr/bin/tup
