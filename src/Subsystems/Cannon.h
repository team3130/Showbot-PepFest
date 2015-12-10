#ifndef CANNON_H
#define CANNON_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "RobotMap.h"

class Cannon: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Relay* FireSolenoid;
	Cannon();
	void InitDefaultCommand();
	void Shoot(bool fire);
};

#endif
