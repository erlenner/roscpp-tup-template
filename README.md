# A template for building ROS nodes in c++ with tup on ubuntu

This template implements the basic publish and subscribe rosnodes, using a custom message located in ros/msg/.

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
