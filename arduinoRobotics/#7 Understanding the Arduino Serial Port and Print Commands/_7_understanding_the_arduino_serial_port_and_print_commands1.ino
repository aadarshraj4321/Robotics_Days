
int j = 0;
int delayTime = 500;
String myString = "j = ";

void setup()
{
	Serial.begin(9600);
}


void loop()
{
  Serial.print(myString);
  Serial.println(j);
  j++;
  delay(delayTime);
}