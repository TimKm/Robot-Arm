#include <Servo.h>
Servo servo1; 
Servo servo2;  
Servo servo3; 
Servo servo4;

int num[] = {0,0,0,0,1};

const int exit_manual = 13;
const int display_value = 12;

int curvalue1 = -1;
int curvalue2 = -1;
int curvalue3 = -1;
int curvalue4 = -1;


int curAngle1 = -1;
int curAngle2 = -1;
int curAngle3 = -1;
int curAngle4 = -1;

const int pot1 = A3;
const int pot2 = A2;
const int pot3 = A1;
const int pot4 = A0;

int pot1Val;
int pot2Val;
int pot3Val;
int pot4Val;

int pot1Angle;
int pot2Angle;
int pot3Angle;
int pot4Angle;

void setup() {
Serial.begin(115200);
Serial.println("Welcome to the Robot Arm GUI");
servo1.attach(6);
servo2.attach(9);
servo3.attach(10);
servo4.attach(11);
pinMode(pot1,INPUT);
pinMode(pot2,INPUT);
pinMode(pot3,INPUT);
pinMode(pot4,INPUT);
pinMode(exit_manual,INPUT);
pinMode(display_value,INPUT);
home_position();
num[4]=1;
}
void loop(){
  char  incomingByte = Serial.read();
  switch (incomingByte){
   case 'm' :
    Serial.println("Manual control is initialized");
    manual_control();
    Serial.println("Manual control is disabled");
    home_position();
    num[4]=1;
   break;
   case 'a' :
    Serial.println("Serial control is initialized");
    serial_control();
    Serial.println("Serial control is disabled");
    home_position();
    num[4]=1;   
   break;
  }
}

void home_position(){
  servo1.write(90);
  servo2.write(0);
  servo3.write(0);
  servo4.write(90);
}



