int potPin = A1;
int ledPin = 6;
int potVal;
float ledVal;


void setup()
{
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}



void loop()
{
  potVal = analogRead(potPin);
  ledVal = (255.0 / 1023.) * potVal;
  analogWrite(ledPin, ledVal);
  Serial.println(ledVal);
}