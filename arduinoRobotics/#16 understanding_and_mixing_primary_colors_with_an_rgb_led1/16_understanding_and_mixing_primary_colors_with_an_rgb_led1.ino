

int blueLed = 9;
int redLed = 8;
int greenLed = 10;

void setup()
{
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  
  Serial.begin(9600);
}



void loop()
{
  //digitalWrite(blueLed, HIGH);
  //delay(1000);
  //digitalWrite(blueLed, LOW);
  //delay(1000);
  
  //digitalWrite(redLed, HIGH);
  //delay(1000);
  //digitalWrite(redLed, LOW);
  //delay(1000);
  
  //digitalWrite(greenLed, HIGH);
  //delay(1000);
  //digitalWrite(greenLed, LOW);
  //delay(1000);
  
  analogWrite(redLed, 200);
  analogWrite(blueLed, 255);
  
  
}