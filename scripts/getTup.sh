#!/bin/sh
sudo apt-get install -y libfuse-dev
git clone https://github.com/gittup/tup.git
cd tup
git reset --hard 314ed32d64a7dec9986854b8ac97780ed9ce64f7
./bootstrap.sh
sudo cp tup /usr/bin/
cd ..
rm -rf tup
# The following line may be needed in special cases
#sudo chmod u+s /usr/bin/tup
