/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// Pin 11 has the LED on Teensy 2.0
// Pin 6  has the LED on Teensy++ 2.0
// Pin 13 has the LED on Teensy 3.0
// give it a name:
int led = 13;

boolean switch1;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.

  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT); 
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
   pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
   pinMode(10,INPUT);
pinMode(2,OUTPUT);
   Serial.begin(9600);
  
}

// the loop routine runs over and over again forever:
void loop() {
digitalWrite(2,HIGH);

switch1=digitalRead(10);
  if(switch1==0){
     digitalWrite(9, LOW);
  digitalWrite(3, HIGH);
  delay(70);
  }
  switch1=digitalRead(10);
  if(switch1==0){
    digitalWrite(3, LOW); 
    digitalWrite(4, HIGH);
  delay(70);
  }
  switch1=digitalRead(10);
  if(switch1==0){
  digitalWrite(4, LOW);
    digitalWrite(5, HIGH);// wait for a second
    delay(70);
  }
  switch1=digitalRead(10);
  if(switch1==0){
    digitalWrite(5, LOW);
  digitalWrite(6, HIGH);  
  delay(70);
  }
  switch1=digitalRead(10);
  if(switch1==0){
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(70);
  }
  switch1=digitalRead(10);
  if(switch1==0){
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  delay(70);
  }
  switch1=digitalRead(10);
  if(switch1==0){
    digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(70);
  }
   
  

  
  // wait for a second
}
