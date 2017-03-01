# A template for building ROS nodes in c++ with tup on ubuntu

This template implements the basic publish and subscribe rosnodes, using a custom message located in ros/msg/.

### Prerequisites:
Install [ROS](http://wiki.ros.org/kinetic/Installation/Ubuntu).

To install tup, run `./scripts/getTup.sh`.

### Build:
To build, run `tup`.

To automatically build on file change and see building log messages in current shell, run `tup monitor -f -a --autoparse`.

To generate a picture showing the dependency relations of the project run `tup graph --stickies . | dot -Tpng > dependency-graph.png`.

To clean all, run `./scripts/clean.sh`. This is mostly needed when debugging the building process.

To see the commands that tup executes, run `tup --verbose`. This is alse mostly needed when debugging the building process.

### Run:
Outputs have the same directory path and name as the source directory, starting from build-native/.
(For example the output binary from the source directory, src/publisher/ has the path build-native/src/publisher/publisher.)

Run `roscore` to start the server that the rosnodes use to communicate with each other.

### Modifying template:
Source files are located in separate directories in [src/](src). Each directory corresponds to one rosnode.

Message and service files are located in [ros/msg/](ros/msg) and [ros/srv/](ros/srv).

Includes, libs and other linkerflags, as well as the ROS version and package name of the project are specified in [Tuprules.tup](Tuprules.tup).
