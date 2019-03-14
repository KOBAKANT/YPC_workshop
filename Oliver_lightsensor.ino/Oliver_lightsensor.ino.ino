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
int speaker;
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.

//  pinMode(3,OUTPUT);
//  pinMode(4,OUTPUT);
//  pinMode(5,OUTPUT); 
//  pinMode(6,OUTPUT);
//  pinMode(7,OUTPUT);
//   pinMode(8,OUTPUT);
//  pinMode(9,OUTPUT);
//   pinMode(10,INPUT);
//pinMode(2,OUTPUT);
   Serial.begin(9600);
  
}

// the loop routine runs over and over again forever:
void loop() {

speaker=analogRead(A0);
Serial.println(analogRead(A0));

//scaling

int scaledspeaker=map(speaker,400,600,100,2000);
scaledspeaker=constrain(scaledspeaker,100,2000);

 tone(2,scaledspeaker); 

  delay(10);
  // wait for a second
}
