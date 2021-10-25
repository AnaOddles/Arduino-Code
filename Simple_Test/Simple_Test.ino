//Declare global varibales 
int ledPin=2;
int dtOn=5000;
int dtOff=1000;

//Code that runs once that sets up Arduino system
void setup() {
  // put your setup code here, to run once:

  //Set up pin 2 as an ouput
  pinMode(ledPin,OUTPUT);

}

//This does continous Arduino funcationality
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,HIGH); //Ouputs 5v to LED
  delay(dtOn);
  digitalWrite(ledPin,LOW); //Outputs 5v to LED
  delay(dtOff);
}
