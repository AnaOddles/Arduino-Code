
//Importing the servo library 
#include <Servo.h>

//Declaring servo object 
Servo myservo;

void setup(){
 //Attach pin 9 to servo 
  myservo.attach(9);
  myservo.write(90);// move servos to center position -> 90°
} 
void loop(){
  myservo.write(90);// move servos to center position -> 90°
  delay(1000);
  myservo.write(60);// move servos to center position -> 60°
  delay(1000);
  myservo.write(90);// move servos to center position -> 90°
  delay(1000);
  myservo.write(150);// move servos to center position -> 120°
  delay(1000);
}
