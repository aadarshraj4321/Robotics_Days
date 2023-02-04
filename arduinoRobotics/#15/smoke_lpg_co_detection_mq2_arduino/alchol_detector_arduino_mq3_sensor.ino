
#define mq3DigitalPin 2
#define redLed 3
#define beepBuzzer 4
#define mq3AnalogPin A1
 
void setup() {
  pinMode(mq3DigitalPin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(beepBuzzer, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  bool digital = digitalRead(mq3DigitalPin);
  int analog = analogRead(mq3AnalogPin);
 
  Serial.print("Analog value : ");
  Serial.print(analog);
  Serial.print("-------");
  Serial.print("Digital value :");
  Serial.println(digital);
 
  if (digital == 0) {
    digitalWrite(redLed, HIGH);
    digitalWrite(beepBuzzer, HIGH);
  } else {
    digitalWrite(redLed, LOW);
    digitalWrite(beepBuzzer, LOW);
  }

  delay(2000);
}