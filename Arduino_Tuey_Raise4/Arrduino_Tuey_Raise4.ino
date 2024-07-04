void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop() {
  Serial.println(analogRead(A0));
  if(analogRead(A0)>600)
  {
    digitalWrite(2, HIGH);
    delay(50);
  }
  else if(analogRead(A0)<=599){
    digitalWrite(2,LOW);
    delay(50);
  }
}
