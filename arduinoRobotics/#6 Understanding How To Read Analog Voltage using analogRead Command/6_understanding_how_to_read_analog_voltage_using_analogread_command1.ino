
int readAnalog;
int V2 = 0;
int analogPin = 3;
// how much delay you want 
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
	// print data in plotter
  	Serial.println(V2);
  	delay(delayTime);
}
