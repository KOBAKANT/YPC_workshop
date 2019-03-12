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
int R=3;
int B=4;
int G=6;

int colorR=255;
int colorG=0;
int colorB=0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.

  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT); 
 
  Serial.begin(9600); 
  
}

// the loop routine runs over and over again forever:
void loop() {
    colorR=255;
  colorG=0;
  //for loop repeats for 255 times
  for(int c=0;c<255;c=c+1){
    colorR=colorR-1;
    colorG=colorG+1;
     analogWrite(R,colorR);
     analogWrite(G,colorG);
     Serial.println(colorR); 
     delay(1);
  }
 for(int c=0;c<255;c=c+1){
    colorG=colorG-1;
    colorB=colorB+1;
     analogWrite(G,colorG);
     analogWrite(B,colorB);
     Serial.println(colorR); 
     delay(1);
  }
 for(int c=0;c<255;c=c+1){
    colorB=colorB-1;
    colorR=colorR+1;
     analogWrite(B,colorB);
     analogWrite(R,colorR);
     Serial.println(colorR); 
     delay(1);
  }
  


    
delay(10);
  // wait for a second
}
