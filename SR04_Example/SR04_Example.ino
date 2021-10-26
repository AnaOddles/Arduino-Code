
//Inlcude the SR04.h library 
#include "SR04.h"

//Define constants for the pins that will be used
#define TRIG_PIN 12
#define ECHO_PIN 11 

//Initialize and create a sr04 object by passing in the trig and echo pin
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;

void setup() {
   Serial.begin(9600);//Initialization of Serial Port
   delay(1000);
}

void loop() {
  //Grab the distance that sensor reads
   a=sr04.Distance();
   //Print value to monitor
   Serial.print(a);
   Serial.println("cm");//The difference between "Serial.print" and "Serial.println" 
                        //is that "Serial.println" can change lines.
   delay(1000);
}
