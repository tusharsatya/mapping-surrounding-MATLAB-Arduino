# mapping-surrounding-MATLAB-Arduino
MAPPING OF SURROUNDINGS USING MATLAB AND ARDUINO

PROBLEM STATEMENT:
Collisions with the walls and other cars while parking or unparking the car or while reversing the car is a very common problem that we all face in our everyday life. The situation becomes worse with crowd. Not only this , people also get engaged in arguments and conflicts disrupting social peace and harmony.

Abstract : 
To rectify the above problem, we have made a system that will map your surrounding showing the position of obstacles and will also give an idea of the size of the obstacle. In this project, we are using an ultrasonic Distance sensor. It generates sound waves beyond the scope of human hearing and measures distance by calculating the time required by these waves to hit an obstacle and travel back. This is similar to the principle used by bats. Another component that we are going to use is a servo motor. It differs from the usual DC motor in that it can turn very precisely to a given angular position and hold its state there. When a servo motor is given pulses of a specific duration, it moves to the corresponding angular position. We will be using both these components to get a 180° field of view. After the system gets the reading from the surrounding using the sensor and the motor , it will create a polar plot or map of the surrounding showing the position of different objects in the field of view of our system using MATLAB and Arduino.

Hardware Requirement : 
This project uses the following hardware : 
1. ARDUINO UNO (any Arduino footprint board can be used in place of the Uno)
The arduino UNO is a microcontroller board with 14 digital input/output pins, 6 analog inputs, a 16 MHz quartz crystal, a USB connection, a power jack, an ICSP header and a reset button. The Uno is the medium through which the sensor sends its readings . 
2. ULTRASONIC SENSOR : HC-SR04
The sensor HC-SR04 takes all the readings. It emits
ultrasonic waves which hits an obstacle and reflects
back to the sensor after which it calculates the distance
between the bot and the obstacle. There are four pins
on the sensor : VCC, TRIG, ECHO and GND. Each of
these pins are connected to the arduino board via
jumper wires. The VCC pin is connected to the 5V volt
power supply, the TRIG and ECHO pins are connected
to output and input pins respectively on the arduino
board and the GND to one of the three ground
connection pins on the board.
VCC = +5VDC
Trig = Trigger input of Sensor
Echo = Echo output of Sensor
GND = GND

Working Principles of Ultrasonic Sensor HC-SR04 :
The two circular structures placed on the sensors circuit
board are the main parts of the module. These are the
parts, which deal with sending out and receiving
ultrasounds.
To start ranging ,a high level signal is sent for 10us using
Trigger.The module sends eight 40 KHz signals
automatically, and then detects whether pulse is received
or not. The range/distance of the sensor is calculated by
the time taken of the reflection of the ultrasound to reach
the sensor. In simpler words it is the time interval
between the initial signal sent and the echo signal
received by the sensor Distance= (Time x Speed of Sound in Air)/2 where, Speed of Sound in Air = 340 m/s

Advantages of Using the HC-SR04 Sensor :
• Low cost.
• Can effectively provide distance to objects.
• Produces tractable amount of data for interpretation. Disadvantages of Using the HC-SR04 Sensor :
• Poorer discriminatory ability than vision
• Susceptible to noise/distortion
• Can produce erroneous data (reflections)

3. SERVO MOTOR: TOWER PRO MG945
The ultrasonic sensor is placed on the servo so that it
can take a 180° reading of its surroundings. The
servo has three wires coming out of it, of the three one
is for power, one for grounding and another for input.
However there are a couple of downsides of using the
servo motor they are:
• The motor cannot take readings of surroundings of
more than 180° • The motor only moves horizontally and not vertically

Software Requirement : We are using the following softwares : 
1. The ARDUINO IDE to upload control code to the Arduino to rotate the servo and get distance data from the ultrasonic sensor and also push it to the serial port.
2. MATHWORKS MATLAB to receive data from the serial line, process it and visualize it to a graph. (For this install The MATLAB Support Package for Arduino Hardware which will let one use MATLAB to communicate with the board through USB cable)
