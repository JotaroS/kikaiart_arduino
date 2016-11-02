const int button = 11;
const int LED = 12;

int val=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button,??); //(ピン番号,OUTPUTorINPUT)
  pinMode(LED,??);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(??); //(読むピンの番号）
  digitalWrite(??,??); //（書き込むピンの番号,書き込みたい変数）
}
