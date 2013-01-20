// Sweeps the shaft of a RC servo motor back and forth across 180 degrees.
#include <Servo.h>

Servo theServo;

int pos = 0;
int increment = 1;
boolean forward = true;

void setup()
{
  theServo.attach(9);
  theServo.write(0);
  
}

void loop()
{
  
  if(forward){
    pos = pos + 1;
     forward =  ( pos < 180 );
  }
  else{
    pos = pos - 1;
   forward =  ( pos  <= 0 );
  }
  
  theServo.write(pos);
  
  if(pos == 0 || pos == 180){
    delay(1000); // pause on extrem angle 
  }
  else{
    delay(10);
  }
}
