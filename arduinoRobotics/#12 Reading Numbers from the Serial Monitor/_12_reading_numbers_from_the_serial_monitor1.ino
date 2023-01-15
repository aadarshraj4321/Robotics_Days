int myNumber;
String msg = "Please Enter Your Number : ";
String msg2 = "Your Number is : ";

void setup()
{
  Serial.begin(9600);
}




void loop()
{
  Serial.println(msg);
  while(Serial.available() == 0)
  {
  	
  }
  
  myNumber = Serial.parseInt();
  Serial.print(msg2);
  Serial.println(myNumber);
}