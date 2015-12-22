#include "CommandBase.h"
#include "Commands/Scheduler.h"

#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/Cannon.h"

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::chassis = NULL;
Cannon* CommandBase::cannon = NULL;
Compressor* CommandBase::compressor = NULL;
OI* CommandBase::oi = NULL;

CommandBase::CommandBase(char const *name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	chassis = new ExampleSubsystem();
	cannon = new Cannon();
	compressor = new Compressor(3, PRESSURE_SWITCH, 2, COMPRESSOR_RELAY);
	oi = new OI();
	compressor->Start();
}
