#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "turtlesim/TeleportAbsolute.h"
#include "iostream"
#include "string"

int main(int argc, char *argv[]) {
  ros::init(argc, argv, "move_turtlesim");

  ros::NodeHandle nh;
  ros::Publisher cmd_vel_pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 10);

  ros::Duration(1.0).sleep();

  geometry_msgs::Twist msg;

  std::string user_input = "";
  int user_input =0;

  std::cout << "How often should the robot move? ";
  std::cin >> user_input;

  while (user_input > 0){
    //move random direction
    std::cout << user_input << "runs left " << endl;
  }
  ros::spin()

  return 0;
}
