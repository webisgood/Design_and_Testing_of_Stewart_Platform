// To include the Servo library
#include <Servo.h>
Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;
Servo Servo6;

// Servo Pin numbers
int servoPin1 = 5;
int servoPin2 = 6;
int servoPin3 = 9;
int servoPin4 = 11;
int servoPin5 = 10;
int servoPin6 = 3;

void setup() {
  // Servo pins setup
  Servo1.attach(servoPin1);
  Servo2.attach(servoPin2);
  Servo3.attach(servoPin3);
  Servo4.attach(servoPin4);
  Servo5.attach(servoPin5);
  Servo6.attach(servoPin6);
}

void loop() {
   //To move the platform vertically up and down
  int i = 0;
  int j = 0;
  while(i <= 90) {
    j =180 - i;
    Servo1.write(i);
    Servo2.write(j);
    Servo3.write(i);
    Servo4.write(j);
    Servo5.write(i);
    Servo6.write(j);

    delay(25);

    i += 1;
  }
//  Servo1.write(45);
//  Servo2.write(135);
//  Servo3.write(45);
//  Servo4.write(135);
//  Servo5.write(45);
//  Servo6.write(135);
  while(i >= 0) {
    j =180 - i;
    Servo1.write(i);
    Servo2.write(j);
    Servo3.write(i);
    Servo4.write(j);
    Servo5.write(i);
    Servo6.write(j);

    delay(25);

    i -= 1;
  }

}
