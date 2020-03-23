/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       sagarpatel                                                */
/*    Created:      Mon Mar 23 2020                                           */
/*    Description:  Graphical Display Of All 8 Motor Temp., Degrees, and Volts*/
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor1               motor         1               
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Motor5               motor         5               
// Motor6               motor         6               
// Motor7               motor         7               
// Motor8               motor         8               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
using namespace vex;
vex::competition    Competition;
/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*---------------------------------------------------------------------------*/
void pre_auton( void ) {
    vexcodeInit();
}
/*----------------------------------------------------------------------------*/
/*                              User Control Task                             */
/*----------------------------------------------------------------------------*/
void usercontrol( void ) {
  while (1){
    Motor1.spin(vex::directionType::fwd, (Controller1.Axis2.value() + (Controller1.Axis4.value())), vex::velocityUnits::pct);
    Motor2.spin(vex::directionType::fwd, (Controller1.Axis2.value() + (Controller1.Axis4.value())), vex::velocityUnits::pct);
    Motor3.spin(vex::directionType::fwd, (Controller1.Axis2.value() + (Controller1.Axis4.value())), vex::velocityUnits::pct);
    Motor4.spin(vex::directionType::fwd, (Controller1.Axis2.value() + (Controller1.Axis4.value())), vex::velocityUnits::pct);
    Motor5.spin(vex::directionType::fwd, (Controller1.Axis2.value() + (Controller1.Axis4.value())), vex::velocityUnits::pct);
    Motor6.spin(vex::directionType::fwd, (Controller1.Axis2.value() + (Controller1.Axis4.value())), vex::velocityUnits::pct);
    Motor7.spin(vex::directionType::fwd, (Controller1.Axis2.value() + (Controller1.Axis4.value())), vex::velocityUnits::pct);
    Motor8.spin(vex::directionType::fwd, (Controller1.Axis2.value() + (Controller1.Axis4.value())), vex::velocityUnits::pct);
    vex::color colour1 = vex::color( 27, 30, 35 );
    vex::color colour2 = vex::color( 0, 0, 0 );
    Brain.Screen.setFont(vex::fontType::mono15);
    Brain.Screen.setFillColor( colour1 );
    Brain.Screen.drawRectangle( 0, 0, 240, 60 );
    Brain.Screen.drawRectangle( 240, 60, 480, 120 );
    Brain.Screen.drawRectangle( 0, 120, 240, 180 );
    Brain.Screen.drawRectangle( 240, 180, 480, 240 );
    Brain.Screen.setFillColor( colour2 );
    Brain.Screen.drawRectangle( 240, 0, 480, 60 );
    Brain.Screen.drawRectangle( 0, 60, 240, 120 );
    Brain.Screen.drawRectangle( 240, 120, 480, 180 );
    Brain.Screen.drawRectangle( 0, 180, 240, 240 );
    Brain.Screen.setFont(vex::fontType::mono15);
    Brain.Screen.printAt(3, 1, "Motor1");
    Brain.Screen.printAt(3+240, 1, "Motor2");
    Brain.Screen.printAt(3, 1+60, "Motor3");
    Brain.Screen.printAt(3+240, 1+60, "Motor4");
    Brain.Screen.printAt(3, 1+120, "Motor5");
    Brain.Screen.printAt(3+240, 1+120, "Motor6");
    Brain.Screen.printAt(3, 1+180, "Motor7");
    Brain.Screen.printAt(3+240, 1+180, "Motor8");
    Brain.Screen.setFont(vex::fontType::mono12);
    Brain.Screen.printAt(3, 15, "Temp.: %f",Motor1.temperature(temperatureUnits::celsius));
    Brain.Screen.printAt(3, 30, "Voltage: %f",vexMotorVoltageGet(Motor1.index())/1000.0 );
    Brain.Screen.printAt(3, 45, "Current: %f",Motor1.current(amp));
    Brain.Screen.printAt(3+240, 15, "Temp.: %f",Motor2.temperature(temperatureUnits::celsius));
    Brain.Screen.printAt(3+240, 30, "Voltage: %f",vexMotorVoltageGet(Motor2.index())/1000.0 );
    Brain.Screen.printAt(3+240, 45, "Current: %f",Motor2.current(amp));
    Brain.Screen.printAt(3, 15+60, "Temp.: %f",Motor3.temperature(temperatureUnits::celsius));
    Brain.Screen.printAt(3, 30+60, "Voltage: %f",vexMotorVoltageGet(Motor3.index())/1000.0 );
    Brain.Screen.printAt(3, 45+60, "Current: %f",Motor3.current(amp));
    Brain.Screen.printAt(3+240, 15+60, "Temp.: %f",Motor4.temperature(temperatureUnits::celsius));
    Brain.Screen.printAt(3+240, 30+60, "Voltage: %f",vexMotorVoltageGet(Motor4.index())/1000.0 );
    Brain.Screen.printAt(3+240, 45+60, "Current: %f",Motor4.current(amp));
    Brain.Screen.printAt(3, 15+120, "Temp.: %f",Motor5.temperature(temperatureUnits::celsius));
    Brain.Screen.printAt(3, 30+120, "Voltage: %f",vexMotorVoltageGet(Motor5.index())/1000.0 );
    Brain.Screen.printAt(3, 45+120, "Current: %f",Motor5.current(amp));
    Brain.Screen.printAt(3+240, 15+120, "Temp.: %f",Motor6.temperature(temperatureUnits::celsius));
    Brain.Screen.printAt(3+240, 30+120, "Voltage: %f",vexMotorVoltageGet(Motor6.index())/1000.0 );
    Brain.Screen.printAt(3+240, 45+120, "Current: %f",Motor6.current(amp));
    Brain.Screen.printAt(3, 15+180, "Temp.: %f",Motor7.temperature(temperatureUnits::celsius));
    Brain.Screen.printAt(3, 30+180, "Voltage: %f",vexMotorVoltageGet(Motor7.index())/1000.0 );
    Brain.Screen.printAt(3, 45+180, "Current: %f",Motor7.current(amp));
    Brain.Screen.printAt(3+240, 15+180, "Temp.: %f",Motor8.temperature(temperatureUnits::celsius));
    Brain.Screen.printAt(3+240, 30+180, "Voltage: %f",vexMotorVoltageGet(Motor8.index())/1000.0 );
    Brain.Screen.printAt(3+240, 45+180, "Current: %f",Motor8.current(amp));
    Brain.Screen.render(); //push data to the LCD all at once to prevent image flickering
    vex::task::sleep(15); //Slight delay so the Brain doesn't overprocess
  }
}
int main() {
    pre_auton();
    Competition.drivercontrol( usercontrol ); //Calls the driver control function
    while(1) {
      vex::task::sleep(15); //Slight delay so the Brain doesn't overprocess
    }
}
