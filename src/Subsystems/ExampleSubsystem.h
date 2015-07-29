#ifndef EXAMPLE_SUBSYSTEM_H
#define EXAMPLE_SUBSYSTEM_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class ExampleSubsystem: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	RobotDrive m_drive;
	ExampleSubsystem();
	void InitDefaultCommand();
	void Drive(double move, double turn, bool squaredInputs = false);
};

#endif
