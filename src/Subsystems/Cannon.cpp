#include "Cannon.h"
#include "../RobotMap.h"
#include "../Commands/ControlCannon.h"
#include "relay.h"

Cannon::Cannon() :
		Subsystem("Cannon")
{
	FireSolenoid = new Solenoid(FIRE_SOLENOID);
}

void Cannon::InitDefaultCommand()
{
	SetDefaultCommand(new ControlCannon());
}

void Cannon::Shoot(bool fire)
{
	FireSolenoid->Set(fire);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

