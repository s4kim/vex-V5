#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor LeftFront = motor(PORT1, ratio18_1, false);
motor RightFront = motor(PORT2, ratio18_1, false);
motor LeftBack = motor(PORT9, ratio18_1, false);
motor RightBack = motor(PORT10, ratio18_1, false);
motor FrontGrabber = motor(PORT5, ratio6_1, false);
motor FrontArm = motor(PORT3, ratio18_1, true);
motor BackArm = motor(PORT8, ratio18_1, false);
motor Intaker = motor(PORT17, ratio6_1, false);
inertial gyro1 = inertial(PORT19);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}