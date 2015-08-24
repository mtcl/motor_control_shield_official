#define leftMotorPin 12 //Pin number for left Motor
#define rightMotorPin 13 //Pin number for left Motor
#define leftMotorPinAna 3 //Pin number for left Motor
#define rightMotorPinAna 11 //Pin number for left Motor

void setup() {
  // put your setup code here, to run once:
  pinMode(leftMotorPin,OUTPUT);
  pinMode(leftMotorPinAna,OUTPUT);

  pinMode(rightMotorPin,OUTPUT);
  pinMode(rightMotorPinAna,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(leftMotorPin,HIGH);
  analogWrite(leftMotorPinAna,255);

  digitalWrite(rightMotorPin,HIGH);
  analogWrite(rightMotorPinAna,255);
  
  delay(5000);

  digitalWrite(leftMotorPin,LOW);
  analogWrite(leftMotorPinAna,150);

  digitalWrite(rightMotorPin,LOW);
  analogWrite(rightMotorPinAna,150);
  delay(2000);
}
