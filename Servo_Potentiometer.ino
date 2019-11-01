
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int pin = A0;  // analog pin used to connect the potentiometer
int val;    // variable to read  analog pin

void setup() {

  Serial.begin(9600);          //  setup serial
  myservo.attach(3);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  
  val = analogRead(pin);            // reads the potentiometer 
  Serial.print(val);
  Serial.print(" ");
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
 
  Serial.print(val);
  Serial.println();
  delay(200);                           // waits for the servo to get there
}
