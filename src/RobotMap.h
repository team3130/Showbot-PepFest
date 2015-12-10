#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.

//Digital Output
const int FRONTLEFTMOTOR = 1;
const int BACKLEFTMOTOR = 2;
const int FRONTRIGHTMOTOR = 3;
const int BACKRIGHTMOTOR = 4;

//Solenoid
const int COMPRESSOR_RELAY = 1;
const int PRESSURE_SWITCH = 3;
const int FIRE_SOLENOID = 2;


#endif
