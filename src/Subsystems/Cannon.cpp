#include "Cannon.h"
#include "../RobotMap.h"
#include "../Commands/ControlCannon.h"
#include "relay.h"

Cannon::Cannon() :
		Subsystem("Cannon")
{
	FireSolenoid = new Relay(FIRE_SOLENOID, Relay::kForwardOnly);
}

void Cannon::InitDefaultCommand()
{
	SetDefaultCommand(new ControlCannon());
}

void Cannon::Shoot(bool fire)
{
	if(fire){
		FireSolenoid->Set(Relay::kOn);
	}else{
		FireSolenoid->Set(Relay::kOff);
	}

}

// Put methods for controlling this subsystem
// here. Call these from Commands.

