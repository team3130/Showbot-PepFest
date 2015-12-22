#include "Cannon.h"
#include "../RobotMap.h"
#include "../Commands/ControlCannon.h"
#include "relay.h"

Cannon::Cannon() :
		Subsystem("Cannon")
{
	FireSolenoidL = new Relay(FIRE_LSOLENOID, Relay::kForwardOnly);
	FireSolenoidR = new Relay(FIRE_RSOLENOID, Relay::kForwardOnly);
}

void Cannon::InitDefaultCommand()
{
	SetDefaultCommand(new ControlCannon());
}

void Cannon::ShootL(bool fireL)
{
	if(fireL){
		FireSolenoidL->Set(Relay::kOn);
	}else{
		FireSolenoidL->Set(Relay::kOff);
	}
}

void Cannon::ShootR(bool fireR)
{
	if(fireR){
		FireSolenoidR->Set(Relay::kOn);
	}else{
		FireSolenoidR->Set(Relay::kOff);
	}
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

