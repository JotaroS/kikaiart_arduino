#include <Servo.h> //サーボモータを使うための辞書をインクルード

const int myServo=??; //PWM出力を行うピン（サーボの黄色い線につなぐ）
Servo servo;//servoという名前のサーボモータを作ります

void setup() {
  // put your setup code here, to run once:
  servo.attach(??);//servoと呼びたいのは、??ピンにつながっているサーボモータです
}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(??);//servoに??度になれと命令
}
