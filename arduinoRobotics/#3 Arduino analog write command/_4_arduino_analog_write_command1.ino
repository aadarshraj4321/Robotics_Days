

int pinRed = 9;
int pinRedTwo = 6;

void setup()
{
  pinMode(pinRed, OUTPUT);
  pinMode(pinRedTwo, OUTPUT);
}




void loop()
{
  analogWrite(pinRed, 255);
  analogWrite(pinRedTwo, 255);
}