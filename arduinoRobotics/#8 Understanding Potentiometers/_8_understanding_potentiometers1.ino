


int voltPin = A1;
int readVal;
float V2;

void setup()
{
  Serial.begin(9600);
}


void loop()
{
  readVal = analogRead(voltPin);
  V2 = (5./1023.) * readVal;
  Serial.println(V2);
  delay(500);
}