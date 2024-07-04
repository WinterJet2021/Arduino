void setup()	{
  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop(){
  
 digitalWrite(3, 0);
 digitalWrite(4,0);
 digitalWrite(5,0);
 digitalWrite(6,1);
 digitalWrite(2,0);
   
 delay(1000);
  
 digitalWrite(3,0);
 digitalWrite(4,0);
 digitalWrite(5,1);
 digitalWrite(6,0);
 digitalWrite(2,0);
   
 delay(1000);
  
 digitalWrite(3, 0);
 digitalWrite(4,1);
 digitalWrite(5,0);
 digitalWrite(6,0);
 digitalWrite(2,0);

 delay(1000);
  
 digitalWrite(3,1);
 digitalWrite(4,0);
 digitalWrite(5,0);
 digitalWrite(6,0);
 digitalWrite(2,0);
  
 delay(1000);

 digitalWrite(3,0);
 digitalWrite(4,0);
 digitalWrite(5,0);
 digitalWrite(6,0);
 digitalWrite(2,1);
  
 delay(1000);
}