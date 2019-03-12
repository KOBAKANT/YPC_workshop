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

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.

  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT); 
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
   
  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(3, HIGH);
  delay(70);
    digitalWrite(3, LOW); 
    digitalWrite(4, HIGH);
  delay(70);
  digitalWrite(4, LOW);
    digitalWrite(5, HIGH);// wait for a second
    delay(70);
    digitalWrite(5, LOW);
  digitalWrite(6, HIGH);  
  delay(70);
  digitalWrite(6, LOW);
  delay(70);
  
  digitalWrite(9, HIGH);
  
  // wait for a second
}
