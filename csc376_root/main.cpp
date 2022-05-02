#include <gazebocontroller.h>
#include <pandarobotmodel.h>

#include <Eigen/Dense>
#include <iostream>
#include <fstream>
#include <algorithm>

// Main code of the assignment framework
int main(int _argc, char **_argv)
{
	
	// Create Gazebo controller to interact with simulation environment
	GazeboController controller;
	
	//Create a set of angles for each joint
	Eigen::Matrix<double,7,1> q;

	
	//-----Your code goes here-----

	q<< 0.0, -M_PI/4, 0.0, -3*M_PI/4, 0.0, M_PI/2, M_PI/4;
	controller.setRobotConfiguration(q);
	//-----Your code ends here-----
	std::this_thread::sleep_for(std::chrono::milliseconds(5000));

	// Move robot to initial configuration (all angles are zero)
	q.setZero();
	controller.setRobotConfiguration(q);
	
	//Make sure the robot moved in simulation and the EE frame updated
	while(!controller.isFrameValid())
	{
	}
    
    
    
    return 0;
}
