#include <docking_core.h>
#include <ros/ros.h>
int main(int argc ,char** argv)
{
	ros::init(argc, argv, "auto_docking");
	Docking auto_dock_("auto_docking");
	ros::spin();
  	return 0;
}
