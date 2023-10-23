#include "ros/ros.h"
#include "subpub/headline.h"

int main(int argc, char **argv)
{
    // creating a node and its handle
    ros::init(argc, argv, "Publisher");
    ros::NodeHandle nh;

    // a publisher node to publish data into the topic
    ros::Publisher topic_pub = nh.advertise<subpub::headline>("news", 1000);
    
    // rate of data published
    ros::Rate loop_rate(1);

    while (ros::ok()) {
        subpub::headline headline;

        // the data to be published
        headline.news = "Breaking News: Terrorist invasion in Dal lake - 2 deaths reported!";
         topic_pub.publish(headline);

        // show the published message
        ROS_INFO("%s", headline.news.c_str());

        //  check for any other callbacks
        ros::spinOnce();

        loop_rate.sleep();
    }
    return 0;
}