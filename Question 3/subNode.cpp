#include "ros/ros.h"
#include "subpub/headline.h"

// function to print the recieved message
void msgToLog(const subpub::headline &headline) {
    ROS_INFO("I heard: %s", headline.news.c_str());
}

int main(int argc,char **argv) {

    // creating a node and its handle
    ros::init(argc,argv,"Subscriber");
    ros::NodeHandle nh;

    // a subscriber node to subscribe to the topic
    ros::Subscriber topic_sub = nh.subscribe("news",1000,msgToLog);

    // to handle any callbacks
    ros::spin();

    return 0;
}
