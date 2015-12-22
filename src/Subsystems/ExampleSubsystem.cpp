#include "ExampleSubsystem.h"
#include "../RobotMap.h"
#include "../Commands/ExampleCommand.h"

ExampleSubsystem::ExampleSubsystem() :
		Subsystem("ExampleSubsystem")
		, m_drive(LEFTMOTOR, RIGHTMOTOR)
{

}

void ExampleSubsystem::InitDefaultCommand()
{
	SetDefaultCommand(new ExampleCommand());
}

void ExampleSubsystem::Drive(double moveL, double moveR, bool quad)
{
	m_drive.TankDrive(moveL, moveR, quad);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

