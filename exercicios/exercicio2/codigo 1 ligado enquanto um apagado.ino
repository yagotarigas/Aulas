void setup()
{
  pinMode(1, OUTPUT);//
}

void loop()
{
digitalWrite(1, HIGH); 
delay(1000);
digitalWrite(1, LOW);
delay(1000);
digitalWrite(2, HIGH); 
delay(1000);
digitalWrite(2, LOW);
delay(1000);
}