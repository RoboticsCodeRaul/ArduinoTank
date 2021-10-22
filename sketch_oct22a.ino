const int dirA = 12;
const int dirB = 13;
const int brakeA = 8;
const int brakeB = 9;
const int PWMA = 3;
const int PWMB = 11;


void setup() {
  // put your setup code here, to run once:
pinMode(dirA,OUTPUT);
pinMode(dirB,OUTPUT);
pinMode(brakeA,OUTPUT);
pinMode(brakeB,OUTPUT);
pinMode(PWMA,OUTPUT);
pinMode(PWMB,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
moveR();



}


void moveF(){
  digitalWrite(dirA, HIGH);
  digitalWrite(brakeA, LOW);
  analogWrite(PWMA, 255);
  digitalWrite(dirB, HIGH);
  digitalWrite(brakeB, LOW);
  analogWrite(PWMB, 255);
 }

 void moveB(){
  digitalWrite(dirA, LOW);
  digitalWrite(brakeA, HIGH);
  analogWrite(PWMA, 255);
  digitalWrite(dirB, LOW);
  digitalWrite(brakeB, HIGH);
  analogWrite(PWMB, 255);
 }

 void moveR(){
  digitalWrite(dirA, LOW);
  digitalWrite(brakeA, HIGH);
  analogWrite(PWMA, 255);
  digitalWrite(dirB, HIGH);
  digitalWrite(brakeB, LOW);
  analogWrite(PWMB, 255);
 }

 void moveL(){
  digitalWrite(dirA, HIGH);
  digitalWrite(brakeA, LOW);
  analogWrite(PWMA, 255);
  digitalWrite(dirB, LOW);
  digitalWrite(brakeB, HIGH);
  analogWrite(PWMB, 255);
 }
