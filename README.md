# A template for building ROS nodes in c++ with tup on ubuntu

This template implements the basic publish and subscribe rosnodes, using a custom message located in ros/msg/.

### How to create a new ROS node repo.

Create a [blank repo](https://github.com/organizations/AscendNTNU/repositories/new), do not initialize the repo with a README or any other files.

Clone this repo bare to your machine using: `git clone --bare git@github.com:AscendNTNU/roscpp-tup-template.git`

Go into the repo you just cloned: `cd roscpp-tup-template/`

Mirror push to the new repository you just created `git push --mirror git@github.com:AscendNTNU/EMPTY-REPO-NAME.git`

NB! Make shure you are pushing to the correct repo, as this will overwrite any existing data.

Remove the bare clone
```
cd ..
rm -rf roscpp-tup-template.git/
```
Delete the example branches from your new repo.

You can now clone this new repo to your machine and start development.

### Prerequisites:
Install [ROS Kinetic](http://wiki.ros.org/kinetic/Installation/Ubuntu).

To install tup, run ["./scripts/getTup.sh""](scripts/getTup.sh).

An unofficial, slightly outdated version of tup is also available as a debian package for ubuntu: [https://launchpad.net/~cezary0/+archive/ubuntu/tup](https://launchpad.net/~cezary0/+archive/ubuntu/tup). However this template is meant to be used with the tup version that getTup.sh downloads and builds so use the debian package at your own risk.

### Building:
To build, run "tup" from the command line.

To automatically build on file change and see building log messages in current shell, run "tup monitor -f -a --autoparse".

### Running
Outputs have the same directory path and name as the source directory, starting from build-native/.
(For example the output binary from the source directory, src/publisher/ have the path build-native/src/publisher/publisher.)

Run the command "roscore" to run the "ROS Master" that the rosnodes need to register with in order to communicate with each other.

### Editing source
Source files are located in separate directories in src/.
