
int analogPin = A1;
int readVal;
float V2;
int delayTime = 500;
int ledPin = 10;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(analogPin, INPUT);
  
  Serial.begin(9600);
}


void loop()
{
  readVal = analogRead(analogPin);
  V2 = (5. / 1023.) * readVal;
  Serial.println(V2);
  delay(delayTime);
  
  if(V2 > 2.5)
  {
  	digitalWrite(ledPin, HIGH);
  }
  else
  {
  	digitalWrite(ledPin, LOW);
  }
}