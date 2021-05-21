#include <Servo.h>
Servo s0; //Base
Servo s1; //Joint 1
Servo s2; //Joint 2
Servo s3; //End effector
int val0;
int val1;
int val2;
int val3;
void setup() {
  // put your setup code here, to run once:
  s0.attach(3);
  s1.attach(5);
  s2.attach(6);
  s3.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val0 = analogRead(A0);
  val0 = map(val0,0,1023,0,90);
  val1 = analogRead(A1);
  val1 = map(val1,0,1023,0,90);
  val2 = analogRead(A2);
  val2 = map(val2,0,1023,0,90);
  val3 = analogRead(A3);
  val3 = map(val3,0,1023,0,90);
  Serial.println(val0);
  Serial.println(val1);
  Serial.println(val2);
  Serial.println(val3);
  Serial.println("****************");
  s0.write(val0);
  s1.write(val1);
  s2.write(val2);
  s3.write(val3);
  delay(15);
}
