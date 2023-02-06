
int buzzerPin = 8;
int delayTime = 1000;
int delayTimeTwo = 500;

void setup()
{
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}


void loop()
{
  for(int i = 0; i <= 100; i++)
  {
    digitalWrite(buzzerPin, HIGH);
    delay(delayTime);
    digitalWrite(buzzerPin, LOW);
    delay(delayTime);
  }
  
  for(int j = 0; j <= 100; j++)
  {
    digitalWrite(buzzerPin, HIGH);
    delay(delayTimeTwo);
    digitalWrite(buzzerPin, LOW);
    delay(delayTimeTwo);
  }
}