long a,b,c,d,e,f,g,h;   
int servo1_speed=2,servo2_speed=2,servo3_speed=2,servo4_speed=2;  

void servo1_control_speed(int angle_1){
  if(b!=angle_1){
  if(b<angle_1){
  for(a = b; a < angle_1; a++)  //move the micro servo from 0 degrees to 180 degrees
  {                               
    servo1.write(a);              
    delay(servo1_speed);                  
  }
  }
  if(b>angle_1){
    for(a = b; a > angle_1; a--)  //now move back the micro servo from 0 degrees to 180 degrees
  {                                
    servo1.write(a);          
    delay(servo1_speed);      
  }
  }
  b=angle_1;
}
}

void servo2_control_speed(int angle_2){
  if(d!=angle_2){
  if(d<angle_2){
  for(c = d; c < angle_2; c++)  //move the micro servo from 0 degrees to 180 degrees
  {                               
    servo2.write(c);              
    delay(servo2_speed);                  
  }
  }
  if(d>angle_2){
    for(c = d; c > angle_2; c--)  //now move back the micro servo from 0 degrees to 180 degrees
  {                                
    servo2.write(c);          
    delay(servo2_speed);      
  }
  }
  d=angle_2;
}
}


void servo3_control_speed(int angle_3){
  if(f!=angle_3){
  if(f<angle_3){
  for(e = f; e < angle_3; e++)  //move the micro servo from 0 degrees to 180 degrees
  {                               
    servo3.write(e);              
    delay(servo3_speed);                  
  }
  }
  if(f>angle_3){
    for(e = f; e > angle_3; e--)  //now move back the micro servo from 0 degrees to 180 degrees
  {                                
    servo3.write(e);          
    delay(servo3_speed);      
  }
  }
  f=angle_3;
}
}

void servo4_control_speed(int angle_4){
  if(h!=angle_4){
  if(h<angle_4){
  for(g = h; g < angle_4; g++)  //move the micro servo from 0 degrees to 180 degrees
  {                               
    servo4.write(g);              
    delay(servo4_speed);                  
  }
  }
  if(h>angle_4){
    for(g = h; g > angle_4; g--)  //now move back the micro servo from 0 degrees to 180 degrees
  {                                
    servo4.write(g);          
    delay(servo4_speed);      
  }
  }
  h=angle_4;
}
}

