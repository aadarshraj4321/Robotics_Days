
int readAnalog;
int V2 = 0;
int analogPin = 3;
int delayTime = 500;


void setup()
{
	pinMode(analogPin, INPUT);
  	Serial.begin(9600);
}

void loop()
{
	readAnalog = analogRead(analogPin);
  	V2 = (5./1023.) * readAnalog;
  	Serial.println(V2);
  	delay(delayTime);
}