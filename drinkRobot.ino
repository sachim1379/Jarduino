#include <Servo.h>

Servo myservo;
int pos = 90;

void setup()
{ 
  myservo.attach(6);
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(7,INPUT);
  myservo.write(90);
  delay(500);

}

void loop()
{

  
  if(digitalRead(7)==HIGH){
    
    Serial.println("button HIGH"); //버튼눌렷음 표시
    digitalWrite(8,HIGH); //led 점등
    
    
    Serial.println("step1");
    myservo.write(30);
    delay(1000);
    
    Serial.println("step2");
    myservo.write(60);
  }
  else{
    digitalWrite(8,LOW);
    //Serial.println("button LOW");
  }
}
