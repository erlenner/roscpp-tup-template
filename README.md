# A template for building ROS nodes in c++ with tup on ubuntu

This template implements the basic publish and subscribe rosnodes, using a custom message located in ros/msg/.

### Prerequisites:
Install [ROS Kinetic](http://wiki.ros.org/kinetic/Installation/Ubuntu).

To install tup, run `./scripts/getTup.sh`.

### Build:
To build, run `tup`.

To automatically build on file change and see building log messages in current shell, run `tup monitor -f -a --autoparse`.

To generate a picture showing the dependency relations of the project run `tup graph --stickies . | dot -Tpng > dependency-graph.png`.

### Run:
Outputs have the same directory path and name as the source directory, starting from build-native/.
(For example the output binary from the source directory, src/publisher/ has the path build-native/src/publisher/publisher.)

Run `roscore` to start the server that the rosnodes use to communicate with each other.

### Modifying template:
Source files are located in separate directories in src/. Each directory corresponds to one rosnode.

Includes, libs and other linkerflags, as well as the ROS version and package name of the project are specified in ["./Tuprules.tup"](Tuprules.tup).
