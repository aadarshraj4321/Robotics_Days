

int blue = 10;
int red = 8;
int green = 9;
int timeDelay = 200;
String msg = "What do you want to glow red, green , blue";
String myColor = "";

void setup()
{
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}



void loop()
{
  Serial.println(msg);
  while(Serial.available() == 0)
  {
  
  }
  
  myColor = Serial.readString();
  if(myColor == "red")
  {
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
  	digitalWrite(red, HIGH);
  }
  
  else if(myColor == "green")
  {
  	digitalWrite(blue, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
  }
  else if(myColor == "blue")
  {
  	digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
  }
  else if(myColor == "aqua")
  {
  	analogWrite(green, LOW);
    analogWrite(blue, 255);
    analogWrite(red, 255);
  }
}