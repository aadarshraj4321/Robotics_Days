

int buzzerPin = 8;
String msg = "Please Input Your Number";
int myNum;
int delayTime = 100;
int potPin = A3;
int potVal;


void setup()
{
  pinMode(buzzerPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}


void loop()
{
  //Serial.println(msg);
  //while(Serial.available() == 0)
  //{
  	
  //}
  
  //myNum = Serial.parseInt();
  //if(myNum > 10)
  //{
  	//digitalWrite(buzzerPin, HIGH);
    //delay(delayTime);
    //digitalWrite(buzzerPin, LOW);
  //}
  
  potVal = analogRead(potPin);
  Serial.println(potVal);
  while(potVal > 1000)
  {
  	digitalWrite(buzzerPin, HIGH);
    potVal = analogRead(potPin);
    Serial.println(potVal);
  }
  digitalWrite(buzzerPin, LOW);
  
}