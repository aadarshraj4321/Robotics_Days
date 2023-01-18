
String msg = "which led you want to glow : red or green : ";
String myName;
int redLed = 6;
int greenLed = 7;
int timeDelay = 200;

void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  Serial.begin(9600);
}


void loop()
{
  Serial.println(msg);
  while(Serial.available() == 0)
  {
  
  }
  
  ledColor = Serial.readString();
  if(ledColor == "red")
  {
   	
    digitalWrite(greenLed, LOW);
  	digitalWrite(redLed, HIGH);
    delay(timeDelay);
    digitalWrite(redLed, LOW);
    delay(timeDelay);
  }
  if(ledColor == "green")
  {
    digitalWrite(redLed, LOW);
  	digitalWrite(greenLed, HIGH);
    delay(timeDelay);
    digitalWrite(redLed, LOW);
    delay(timeDelay);
  }
}