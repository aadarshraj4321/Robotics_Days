String msg = "How many times you want to blink Light : ";
int numBlinks;
int ledPin = 9;
int blinkTime = 200;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}




void loop()
{
  Serial.println(msg);
  
  while(Serial.available() == 0)
  {
  
  }
  
  numBlinks = Serial.parseInt();
  for(int i = 0; i < numBlinks; i++)
  {
    Serial.print("Led On : ");
    Serial.println(i);
  	digitalWrite(ledPin, HIGH);
    delay(blinkTime);
    digitalWrite(ledPin, LOW);
    delay(blinkTime);
  }
}