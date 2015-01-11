/* FIRST Team 1073's RobotBuilder (0.0.2) for WPILibExtensions ---
Do not mix this code with any other version of RobotBuilder! */
#include "Drivetrain.h"
#include "../Robotmap.h"
#include "../Commands/Drive.h"
Drivetrain::Drivetrain() : Subsystem("Drivetrain") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	frontLeft = RobotMap::drivetrainFrontLeft;
	frontRight = RobotMap::drivetrainFrontRight;
	backLeft = RobotMap::drivetrainBackLeft;
	backRight = RobotMap::drivetrainBackRight;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Drivetrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new Drive());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void Drivetrain::Move(float x, float y, float twist)
{
	Robot::mechDrive->MecanumDrive_Cartesian(x,y,twist);
}
