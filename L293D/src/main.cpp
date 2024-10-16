/*
#include <Arduino.h>
#include <math.h>
int voltpinx = PA0;
int voltpiny = PB1;
int power = PA1;
int ground =PA2;
int dir1 =PA7;
int gnd1 =PA5;
int dir2 =PB4;
int gnd2 =PB6;
int ENABLE1 = PA6;
int ENABLE2 = PB5 ;
int speed;

int xneutral;
int yneutral;

void setup()
{
  pinMode(dir1,OUTPUT);
  pinMode(gnd1,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(gnd2,OUTPUT);
  pinMode(ENABLE1,OUTPUT);
  pinMode(ENABLE2,OUTPUT);
  pinMode(voltpinx,INPUT);
  pinMode(voltpiny,INPUT);
  pinMode(power,OUTPUT);
  pinMode(ground,OUTPUT);
  digitalWrite(power,HIGH);
  digitalWrite(ground,LOW);
  xneutral=analogRead(voltpinx);
  yneutral=analogRead(voltpiny);

}
void loop()
{
  int voltagex=analogRead(voltpinx);
  int voltagey=analogRead(voltpiny);
  if (abs(xneutral-voltagex)<=20)
  {
    int speedy=map(voltagey,0,1023,-255,255);
    if(speedy>=0)
    {
        
      digitalWrite(dir1,HIGH);
      digitalWrite(dir2,HIGH);
    }
    else
    {
      digitalWrite(dir1,LOW);
      digitalWrite(dir2,LOW);
    }
      digitalWrite(gnd1,LOW);
      analogWrite(ENABLE1,abs(speedy));

    
      digitalWrite(gnd2,LOW);
      analogWrite(ENABLE2,abs(speedy)); 
  }
  if (abs(yneutral-voltagey)<=20)
  {
    int speedx=map(voltagex,0,1023,-255,255);
    if(speedx>=0)
    {
        
      digitalWrite(dir1,HIGH);
      digitalWrite(dir2,LOW);
    }
    else
    {
      digitalWrite(dir1,LOW);
      digitalWrite(dir2,HIGH);
    }
      digitalWrite(gnd1,LOW);
      analogWrite(ENABLE1,abs(speedx));

    
      digitalWrite(gnd2,LOW);
      analogWrite(ENABLE2,abs(speedx)); 
  }
*/
//   int speedy=map(voltagey,0,1023,-128,128);
//   int speedx=map(voltagex,0,1023,-128,128);
//   //if(voltpinx>0)
//   if(speedy>=-20 && speedy<=20)
//   {

//     //speed=map(voltagey,0,1023,-128,128);
//     if(speedx>=0)
//     {
//       digitalWrite(dir1,HIGH);
//       digitalWrite(dir2,HIGH);
//     }
//     else
//     {
//       digitalWrite(dir1,LOW);
//       digitalWrite(dir2,LOW);

//     }
//     digitalWrite(gnd1,LOW);
//     analogWrite(ENABLE1,abs(speedx));

    
//     digitalWrite(gnd2,LOW);
//     analogWrite(ENABLE2,abs(speedx)); 
// }
// else if(speedx>=-20 && speedx<=20)
// {
//   speed=map(voltagex,0,1023,-128,128);
//   if(speedy>=0)
//   {
//     digitalWrite(dir1,HIGH);
//     digitalWrite(dir2,LOW);
//   }
//   else
//   {
//     digitalWrite(dir1,LOW);
//     digitalWrite(dir2,HIGH);
//   }
//    digitalWrite(gnd1,LOW);
//     analogWrite(ENABLE1,abs(speedy));

    
//     digitalWrite(gnd2,LOW);
//     analogWrite(ENABLE2,abs(speedy)); 
// }

 

  

