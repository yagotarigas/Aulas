const int led1 = 4;
const int led2 = 5;
const int led3 = 6;
const int led4 = 7;
const int led5 = 8;
const int led6 = 9;
const int led7 = 10;
const int led8 = 11;
const int led9 = 12;
const int led10 = 13;
const int botao1 = 3;

const int pot = 0;
int var = 0;

 void setup()
 { 

      pinMode(led1, OUTPUT);
      pinMode(led2, OUTPUT ); 
      pinMode(led3, OUTPUT ); 
      pinMode(led4, OUTPUT ); 
      pinMode(led5, OUTPUT ); 
      pinMode(led6, OUTPUT);
      pinMode(led7, OUTPUT ); 
      pinMode(led8, OUTPUT ); 
      pinMode(led9, OUTPUT ); 
      pinMode(led10, OUTPUT );
 
      pinMode(botao1, INPUT ); 
       Serial.begin(9600);
 }

int valor1 ;

 void loop()
{
   valor1 = digitalRead(botao1);
   if(valor1){
   var = analogRead(pot);
   Serial.println(var);
   delay(200);

   if (var > 50){
digitalWrite(led1, HIGH);
   }
  
   else {
digitalWrite(led1, LOW);
 
  }

if (var > 100){
digitalWrite(led2, HIGH);
   }
  
   else {
digitalWrite(led2, LOW);
 
  }

if (var > 200){
digitalWrite(led3, HIGH);
   }
  
   else {
digitalWrite(led3, LOW);
 
  }

if (var > 300){
digitalWrite(led4, HIGH);
   }
  
   else {
digitalWrite(led4, LOW);
 
  }

if (var > 400){
digitalWrite(led5, HIGH);
   }
  
   else {
digitalWrite(led5, LOW);
  }

if (var > 500){
digitalWrite(led6, HIGH);
   }
  
   else {
digitalWrite(led6, LOW);
 
  }

if (var > 600){
digitalWrite(led7, HIGH);
   }
  
   else {
digitalWrite(led7, LOW);
 
  }

if (var > 700){
digitalWrite(led8, HIGH);
   }
  
   else {
digitalWrite(led8, LOW);
 
  }

if (var > 800){
digitalWrite(led9, HIGH);
   }
  
   else {
digitalWrite(led9, LOW);
 
  }

if (var > 900){
digitalWrite(led10, HIGH);
   }
  
   else {
digitalWrite(led10, LOW);
  }
 }
 }