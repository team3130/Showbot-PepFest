#include "ControlCannon.h"

ControlCannon::ControlCannon()
{
	Requires(cannon);
//	m_fireButton = new JoystickButton(CommandBase::oi->stickR,1);
}

// Called just before this Command runs the first time
void ControlCannon::Initialize()
{
	cannon->ShootL(false);
	cannon->ShootR(false);
}

// Called repeatedly when this Command is scheduled to run
void ControlCannon::Execute()
{
	bool fireTriggerL = oi->stickL->GetTrigger() && oi->stickL->GetRawButton(2);
	bool fireTriggerR = oi->stickR->GetTrigger() && oi->stickR->GetRawButton(2);
	cannon->ShootL(fireTriggerL);
	cannon->ShootR(fireTriggerR);
}

// Make this return true when this Command no longer needs to run execute()
bool ControlCannon::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ControlCannon::End()
{
	cannon->ShootL(false);
	cannon->ShootR(false);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ControlCannon::Interrupted()
{
	End();
}
