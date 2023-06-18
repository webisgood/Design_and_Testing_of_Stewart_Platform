#include <Servo.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;
Servo Servo6;

int servoPin1 = 5;
int servoPin2 = 6;
int servoPin3 = 9;
int servoPin4 = 11;
int servoPin5 = 10;
int servoPin6 = 3;

void setup() {
  // put your setup code here, to run once:
  Servo1.attach(servoPin1);
  Servo2.attach(servoPin2);
  Servo3.attach(servoPin3);
  Servo4.attach(servoPin4);
  Servo5.attach(servoPin5);
  Servo6.attach(servoPin6);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 45;
  int theta = 15;
  while(i <= 45+theta) {
    Servo1.write(i);
    Servo2.write(90+i);
    Servo3.write(i);
    Servo4.write(90+i);
    Servo5.write(i);
    Servo6.write(90+i);

    delay(75);

    i++;
  }

  while(i >= 45-theta) {
    Servo1.write(i);
    Servo2.write(90+i);
    Servo3.write(i);
    Servo4.write(90+i);
    Servo5.write(i);
    Servo6.write(90+i);

    delay(75);

    i--;
  }

  while(i <= 45) {
    Servo1.write(i);
    Servo2.write(90+i);
    Servo3.write(i);
    Servo4.write(90+i);
    Servo5.write(i);
    Servo6.write(90+i);

    delay(75);

    i++;
  }
}
