#include "Cannon.h"
#include "../RobotMap.h"
#include "../Commands/ControlCannon.h"
#include "relay.h"

Cannon::Cannon() :
		Subsystem("Cannon")
{
	FireSolenoid = new Relay(FIRE_SOLENOID);
}

void Cannon::InitDefaultCommand()
{
	SetDefaultCommand(new ControlCannon());
}

void Cannon::Shoot(bool fire)
{
	if(fire){
		FireSolenoid->Set(Relay::kForward);
	}else{
		FireSolenoid->Set(Relay::kReverse);
	}
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

