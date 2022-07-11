/******************************************
 *Autor: Ricard Santiago Raigada García
 * 
 *Time:2022.07.10
 *
 ******************************************/

#include "pitches.h"
int buzz = 11; //define BUZZ port
int button = 3; //define button port
int val;

int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5};
int duration = 400;  // 400 miliseconds

int red = 9; //define red port
int green =6; //define green port
int blue = 5; //define blue port

void  setup()
{
  pinMode(buzz, OUTPUT); //define BUZZ as a output port
  pinMode(button, INPUT); //define button as a output port

  pinMode (red, OUTPUT); //define red as a output port
  pinMode (green, OUTPUT); //define green as a output port
  pinMode (blue, OUTPUT);  //define blue as a output port
}
void  loop()
{ val = digitalRead(button); //read the value of the digital interface 3 assigned to val
  if (val == HIGH)         //when the button has signal, the buzzer will start to play the melody
  {
    digitalWrite(buzz, LOW);
  }
  else
  {
    digitalWrite(buzz, HIGH);
    tone(11, NOTE_E5, duration);
    analogWrite (red, 255);
    analogWrite (green, 238);
    analogWrite (blue, 0);
    delay(550);
    
    tone(11, NOTE_E5, duration);
    analogWrite (red, 255);
    analogWrite (green, 238);
    analogWrite (blue, 0);
    delay(550);
    
    tone(11, NOTE_F5, duration);
    analogWrite (red, 47);
    analogWrite (green, 255);
    analogWrite (blue, 0);
    delay(550);
    
    tone(11, NOTE_G5, duration);
    analogWrite (red, 0);
    analogWrite (green, 0);
    analogWrite (blue, 255);
    delay(550);
    
    tone(11, NOTE_G5, duration);
    analogWrite (red, 0);
    analogWrite (green, 0);
    analogWrite (blue, 255);
    delay(550);
    
    tone(11, NOTE_F5, duration);
    analogWrite (red, 47);
    analogWrite (green, 255);
    analogWrite (blue, 0);
    delay(550);
    
    tone(11, NOTE_E5, duration);
    analogWrite (red, 255);
    analogWrite (green, 238);
    analogWrite (blue, 0);
    delay(550);
    
    tone(11, NOTE_D5, duration);
    analogWrite (red, 255);
    analogWrite (green, 255);
    analogWrite (blue, 0);
    delay(550);
    
    tone(11, NOTE_C5, duration);
    analogWrite (red, 255);
    analogWrite (green, 255);
    analogWrite (blue, 0);
    delay(550);
    
    tone(11, NOTE_C5, duration);
    analogWrite (red, 255);
    analogWrite (green, 255);
    analogWrite (blue, 0);
    delay(550);
    
    tone(11, NOTE_D5, duration);
    analogWrite (red, 255);
    analogWrite (green, 123);
    analogWrite (blue, 0);
    delay(550);
    
    tone(11, NOTE_E5, duration);
    analogWrite (red, 255);
    analogWrite (green, 238);
    analogWrite (blue, 0);
    delay(400);
    
    tone(11, NOTE_E5, duration);
    analogWrite (red, 255);
    analogWrite (green, 238);
    analogWrite (blue, 0);
    delay(550);
    
    tone(11, NOTE_D5, duration);
    analogWrite (red, 255);
    analogWrite (green, 123);
    analogWrite (blue, 0);
    delay(400);
    
    tone(11, NOTE_D5, duration);
    analogWrite (red, 255);
    analogWrite (green, 123);
    analogWrite (blue, 0);
    delay(400);


    analogWrite (red, LOW);
    analogWrite (green, LOW);
    analogWrite (blue, LOW);
  }
}


 


 

 
