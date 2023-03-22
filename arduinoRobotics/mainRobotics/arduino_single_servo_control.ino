#include <Servo.h>

// servo object representing the MG 996R servo
Servo servo; 

int delayTime = 1000;

void setup()
{
  servo.attach(3);
}


void loop()
{
  servo.write(0);
  delay(delayTime);

  servo.write(45);
  delay(delayTime);

  servo.write(90);
  delay(delayTime);

  servo.write(180);
  delay(delayTime);
}