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
int led = 20;
int mika;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);  
  pinMode(15,INPUT);  
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  mika=digitalRead(15);
  Serial.println(mika);
  //when mika is 1, then turn on the led
  if(mika == 1){
    digitalWrite(led, HIGH);

  }
if(mika==0) {digitalWrite(led, LOW); }

  
  delay(10);

}
