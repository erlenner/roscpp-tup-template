#include "ros/ros.h"
#include "pub_sub_demo/Pos.h"

void chatterCallback(const pub_sub_demo::Pos::ConstPtr& pos)
{
    ROS_INFO("I heard: [x:\t%f\ty:\t%f\tz:\t%f]", pos->x, pos->y, pos->z);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "pos_subscriber_node");
    ros::NodeHandle n;

    ros::Subscriber posSub = n.subscribe("pos_publisher", 1000, chatterCallback);
    ros::spin();

    return 0;
}
