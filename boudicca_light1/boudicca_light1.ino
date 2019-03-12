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
int buttonState;
int last_buttonState;
int memory;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(15, INPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  buttonState = digitalRead(15);

  //when mika is 1, then turn on the led
  if (buttonState == 1) {
    if (last_buttonState == 0) {
      memory = memory + 1;
    }
  }
  if (buttonState == 0) {

  }

if(memory%2 ==0){
  digitalWrite(led,HIGH);
}
if(memory%2 ==1){
  digitalWrite(led,LOW);
}
  
  Serial.println(memory);

  delay(10);
  last_buttonState = buttonState;
}
