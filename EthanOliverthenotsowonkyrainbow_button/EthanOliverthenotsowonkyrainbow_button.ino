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

int buttonState;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.

  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT); 
 pinMode(15,INPUT); 
  Serial.begin(9600); 
  
}

// the loop routine runs over and over again forever:
void loop() {
buttonState=digitalRead(15);
Serial.println(buttonState); 
  if(buttonState==1){
    colorR=255;
  colorG=0;
  //for loop repeats for 255 times
  for(int c=0;c<255;c=c+1){
    colorR=colorR-1;
    colorG=colorG+1;
      analogWrite(R,colorR);
     analogWrite(G,colorG);
     
     delay(20);
  }
 for(int c=0;c<255;c=c+1){
    colorG=colorG-1;
    colorB=colorB+1;
     analogWrite(G,colorG);
     analogWrite(B,colorB);
    
     delay(20);
  }
 for(int c=0;c<255;c=c+1){
    colorB=colorB-1;
    colorR=colorR+1;
     analogWrite(B,colorB);
     analogWrite(R,colorR);
     
     delay(20);
  }
  
  }
  
if(buttonState==0){
  analogWrite(B,0);
     analogWrite(R,0);
     analogWrite(G,0);
}
    
delay(10);
  // wait for a second
}
