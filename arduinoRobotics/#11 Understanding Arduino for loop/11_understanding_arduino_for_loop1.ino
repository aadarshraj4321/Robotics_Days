
int yLedPin = 6;
int rLedPin = 8;

int yTime = 500;
int rTime = 500;


void setup()
{
  pinMode(yLedPin, OUTPUT);
  pinMode(rLedPin, OUTPUT);
  
  Serial.begin(9600);
}



void loop()
{
  for(int i = 0; i < 3; i++)
  {
  	digitalWrite(yLedPin, HIGH);
  	delay(yTime);
  	digitalWrite(yLedPin, LOW);
  	delay(yTime);
  }
  
  for(int i = 0; i < 3; i++)
  {     
  	digitalWrite(rLedPin, HIGH);
  	delay(rTime);
  	digitalWrite(rLedPin, LOW);
  	delay(rTime);
  }
}