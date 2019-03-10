/*
Main arduino code file for Meme_AI_Turret
Contributors: Stephen Catsmas
              Boris Deletic
*/

#include <Servo.h>

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}




/*
notes on how to use (Servo.h)
to create servo object:
Servo foo;
attached servo variable to pin:
foo.attach(pin);
to position servo:
foo.write(deg);
read servo position (read out in deg):
foo.read();