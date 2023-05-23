#include <Arduino.h>
#include "Blink.h"

Blink::Blink(int pin){
  pinMode(pin, OUTPUT);
  pinNumber = pin;
}

void Blink::blink(bool value){
  if(value == true){
    digitalWrite(pinNumber,HIGH); 
    delay(1000); 
    digitalWrite(pinNumber,LOW); 
    delay(1000);
  }else{
    digitalWrite(pinNumber,LOW);
  }
}

void Blink::blink(bool value, int blinkLength ){
  if(value == true){
    digitalWrite(pinNumber,HIGH); 
    delay(blinkLength); 
    digitalWrite(pinNumber,LOW); 
    delay(blinkLength);
  }else{
    digitalWrite(pinNumber,LOW);
  }
}

void Blink::blink(bool value, int blinkLength, int blinkLoops){
  if(value == true){
    for(int i=0;i<blinkLoops;i++){ 
      digitalWrite(pinNumber,HIGH);
      delay(blinkLength); 
      digitalWrite(pinNumber,LOW); 
      delay(blinkLength);
    }
  }else{
    digitalWrite(pinNumber,LOW);
  }
}

void Blink::breath(int speed) {
  int brightness = 0;
  int fadeAmount = 5;

  while (true) {
    analogWrite(pinNumber, brightness);
    
    brightness = brightness + fadeAmount;
    if (brightness <= 0 || brightness >= 255) {
      fadeAmount = -fadeAmount;
    }
    
    delay(speed);
  }
}
