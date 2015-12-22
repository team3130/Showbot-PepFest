#ifndef CANNON_H
#define CANNON_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Cannon: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Relay* FireSolenoidL;
	Relay* FireSolenoidR;
	Cannon();
	void InitDefaultCommand();
	void ShootL(bool fireL);
	void ShootR(bool fireR);
};

#endif
