//Global Variables
int ledPin = 5; //LED in Digital pin 5
int buttonApin = 9; //Button switch on pin 9 
int buttonBpin = 8; //Button switch on pin 8

//Setup arduino at startup
void setup() 
{
  //Set the led (pin 5) as OUPUT, ouputs voltage 
  pinMode(ledPin, OUTPUT);

  //Set the button switches (pin 8 & 9) as INPUT_PULLUP
  pinMode(buttonApin, INPUT_PULLUP);  //
  pinMode(buttonBpin, INPUT_PULLUP);  
}

//Main program code
void loop() 
{
  //Grab the value from switch button  - if pressed (0V - ground)  
  if (digitalRead(buttonApin) == LOW)
  {
    //Turn the led pin to a volt of 5
    digitalWrite(ledPin, HIGH);
  }
  //Grab the value from switch button2  - if pressed (0V - ground)  
  if (digitalRead(buttonBpin) == LOW)
  {
    //Turn the led pin to volt of 3-0 
    digitalWrite(ledPin, LOW);
  }
}
