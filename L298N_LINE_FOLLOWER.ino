//ARDUINO LINE FOLLOWER CAR USING L298N MOTOR DRIVER


#define Motor11 5
 #define Motor12 6
 #define Motor21 9
 #define Motor22 10
 #define EnMotor1 7
 #define EnMotor2 8
 
 int valuePWM1=110; // speed motor 1 
 int valuePWM2=130; // speed motor 2
 
void setup() {
  
  pinMode(Motor11,OUTPUT);
  pinMode(Motor12,OUTPUT);
  pinMode(Motor21,OUTPUT);
  pinMode(Motor22,OUTPUT);
  pinMode(EnMotor1,OUTPUT);
  pinMode(EnMotor2,OUTPUT);
 digitalWrite(EnMotor1, HIGH);
 digitalWrite(EnMotor2, HIGH);
pinMode(4, INPUT); // initialize Right sensor as an inut
pinMode(3, INPUT); // initialize Left sensor as as input
 
}
 
void loop() {
 
  int LEFT_SENSOR = digitalRead(4);
  int RIGHT_SENSOR = digitalRead(3);
  
if(RIGHT_SENSOR==0 && LEFT_SENSOR==0) //FORWARD
{
            analogWrite(Motor11, valuePWM1);
            analogWrite(Motor12, 0);
            analogWrite(Motor21, valuePWM1);
            analogWrite(Motor22, 0);
}
 
 else if(RIGHT_SENSOR==1 && LEFT_SENSOR==0) //LEFT
 {
            analogWrite(Motor11, 0);
            analogWrite(Motor12, valuePWM1);
            analogWrite(Motor21, valuePWM1);
            analogWrite(Motor22, 0);
}
 
else if(RIGHT_SENSOR==0 && LEFT_SENSOR==1) //RIGHT
 {
              analogWrite(Motor11, valuePWM1);
              analogWrite(Motor12, 0);
              analogWrite(Motor21, 0);
              analogWrite(Motor22, valuePWM1);
}
 
else if(RIGHT_SENSOR==1 && LEFT_SENSOR==1) //stop
{
              analogWrite(Motor11, 0);
              analogWrite(Motor12, 0);
              analogWrite(Motor21, 0);
              analogWrite(Motor22, 0);
              
 }
}
