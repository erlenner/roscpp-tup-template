#include <iostream>
#include <ros/ros.h>
#include "pub_sub_demo/Pos.h"
#include "external_lib/external_class.h"
#include "external_lib2/external_class.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "pos_publisher_node");

  ros::NodeHandle n;

  ros::Publisher posPub = n.advertise<pub_sub_demo::Pos>("pos_publisher", 1000);

  ros::Rate loop_rate(10);

  int count = 0;
  while (ros::ok())
  {
    pub_sub_demo::Pos pos;

    pos.x = 1;
    pos.y = 2;
    pos.z = 3;

    ROS_INFO("Sending: [x:\t%f\ty:\t%f\tz:\t%f]", pos.x, pos.y, pos.z);

    posPub.publish(pos);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }

  return 0;
}
