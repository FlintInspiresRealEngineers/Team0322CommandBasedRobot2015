#include "DriveWithJoystick.h"

DriveWithJoystick::DriveWithJoystick() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);
}

// Called just before this Command runs the first time
void DriveWithJoystick::Initialize() {	
}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoystick::Execute() {
	chassis->driveWithJoystick(oi->getDriveStick());
}

// Make this return true when this Command no longer needs to run execute()
bool DriveWithJoystick::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveWithJoystick::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWithJoystick::Interrupted() {
}
