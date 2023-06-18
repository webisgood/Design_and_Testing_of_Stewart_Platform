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
  int i = 45;
  while(i <= 90) {
    Servo1.write(90-i);
    Servo6.write(90+i);
    Servo3.write(45);
    Servo2.write(135);
    Servo5.write(i);
    Servo4.write(180-i);

    delay(50);
    i++;
  }

  int counter = 0;
  while(counter < 5) {
    i = 0;
    while(i <= 45) {
      Servo1.write(i);
      Servo6.write(180-i);
      Servo3.write(45+i);
      Servo2.write(135-i);
      Servo5.write(90-2*i);
      Servo4.write(90+2*i);

      delay(50);
      i++;
    }

    i = 0;
    while(i <= 45) {
      Servo5.write(i);
      Servo4.write(180-i);
      Servo1.write(45+i);
      Servo6.write(135-i);
      Servo3.write(90-2*i);
      Servo2.write(90+2*i);

      delay(50);
      i++;
    }

    i = 0;
    while(i <= 45) {
      Servo3.write(i);
      Servo2.write(180-i);
      Servo5.write(45+i);
      Servo4.write(135-i);
      Servo1.write(90-2*i);
      Servo6.write(90+2*i);

      delay(50);
      i++;
    }

    counter++;
  }

  i = 0;
  while(i <= 45) {
    Servo1.write(i);
    Servo6.write(180-i);
    Servo3.write(45);
    Servo2.write(135);
    Servo5.write(90-i);
    Servo4.write(90+i);

    delay(50);
    i++;
  }
}
