# motor_control_shield_official
Arduino Motor Control Official Shield v3

This code is for testing the motor control on the official shield from Arduino. This can control two motors in both directions at the same time. 

There are a total of 8 pins used in this shield:

Some handy information from : (https://www.arduino.cc/en/Main/ArduinoMotorShieldR3):

Input and Output

This shield has two separate channels, called A and B, that each use 4 of the Arduino pins to drive or sense the motor. In total there are 8 pins in use on this shield. You can use each channel separately to drive two DC motors or combine them to drive one bipolar stepper motor.

The shield's pins, divided by channel are shown in the table below:

Function	pins per Ch. A	pins per Ch. B
Direction	        D12	        D13
PWM	              D3	        D11
Brake	            D9	        D8
Current Sensing	  A0	        A1

If you don't need the Brake and the Current Sensing and you also need more pins for your application you can disable this features by cutting the respective jumpers on the back side of the shield.
