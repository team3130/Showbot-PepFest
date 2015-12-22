#include "ControlCannon.h"

ControlCannon::ControlCannon()
{
	Requires(cannon);
	m_fireButton = new JoystickButton(CommandBase::oi->stickR,1);
}

// Called just before this Command runs the first time
void ControlCannon::Initialize()
{
	cannon->Shoot(true);
}

// Called repeatedly when this Command is scheduled to run
void ControlCannon::Execute()
{
	cannon->Shoot(m_fireButton);
}

// Make this return true when this Command no longer needs to run execute()
bool ControlCannon::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ControlCannon::End()
{
	cannon->Shoot(false);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ControlCannon::Interrupted()
{
	End();
}
