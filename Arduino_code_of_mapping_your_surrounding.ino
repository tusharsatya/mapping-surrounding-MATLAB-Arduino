Arduino Code :
/*
* created by Kakul and Tushar : www.amuroboclub.in
* Mapping your surrounding using Ultrsonicsensor with Matlab
and Arduino
*
 Ultrasonic sensor Pins:
 VCC: +5VDC
 Trig : Trigger (INPUT) - Pin11
 Echo: Echo (OUTPUT) - Pin 12
 GND: GND
*/
#include <Servo.h>
Servo myservo;
int pos = 0;
int trigPin = 11;
int echoPin = 12;
long duration, cm ;
void setup() {
 //Serial Port begin
 myservo.attach(9); 
 Serial.begin (9600);
 //Define inputs and outputs
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
}
void loop()
{
 for (pos = 0; pos <= 180; pos += 4) {
 myservo.write(pos);
 digitalWrite(trigPin, LOW);
 delayMicroseconds(5);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 pinMode(echoPin, INPUT);
 duration = pulseIn(echoPin, HIGH);
 cm = (duration/2) / 29.1;

 Serial.println(pos);
 Serial.println(cm);
 delay(400);
 }
 }
