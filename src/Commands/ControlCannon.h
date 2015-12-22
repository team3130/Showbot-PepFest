#ifndef CONTROL_CANNON_H
#define CONTROL_CANNON_H

#include "../CommandBase.h"
#include "WPILib.h"

class ControlCannon: public CommandBase
{
public:
	ControlCannon();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
