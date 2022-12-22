

int ledRed = 8;
int ledGreen = 9;
int ledBlue = 10;

int dig = 100;
int duh = 500;

int longDelay = 1000;

void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}



void loop()
{
  digitalWrite(ledRed, HIGH);
  delay(dig);
  digitalWrite(ledRed, LOW);
  delay(dig);
  digitalWrite(ledRed, HIGH);
  delay(dig);
  digitalWrite(ledRed, LOW);
  delay(dig);
  digitalWrite(ledRed, HIGH);
  delay(dig);
  digitalWrite(ledRed, LOW);
  delay(dig);
  
  
  
  
  digitalWrite(ledGreen, HIGH);
  delay(duh);
  digitalWrite(ledGreen, LOW);
  delay(duh);
  digitalWrite(ledGreen, HIGH);
  delay(duh);
  digitalWrite(ledGreen, LOW);
  delay(duh);
  digitalWrite(ledGreen, HIGH);
  delay(duh);
  digitalWrite(ledGreen, LOW);
  delay(duh);
  
  
  
  
  digitalWrite(ledBlue, HIGH);
  delay(dig);
  digitalWrite(ledBlue, LOW);
  delay(dig);
  digitalWrite(ledBlue, HIGH);
  delay(dig);
  digitalWrite(ledBlue, LOW);
  delay(dig);
  digitalWrite(ledBlue, HIGH);
  delay(dig);
  digitalWrite(ledBlue, LOW);
  delay(dig);
  
  
  
  delay(longDelay);
}
