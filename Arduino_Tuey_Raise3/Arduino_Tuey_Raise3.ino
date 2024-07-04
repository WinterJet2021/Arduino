#include <Servo.h>
Servo S1;
void setup() {
  S1.attach(5); //pinmode servo
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);

  Serial.begin(9600);
  S1.write(90);

}

void loop() {
  int poten_val = analogRead(A0);
  int degree = map(poten_val, 0, 1023, 0, 180);
  S1.write(degree);

  if(degree >= 0 and degree < 60){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  }
  else if(degree >= 60 and degree < 120){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    delay(50);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    delay(50);
  }
  else if (degree >= 120 and degree < 180){
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
  }
}
