void serial_control(){
  while(num[4]==1){
  if(Serial.available()>4 & Serial.available()<6){ 
    for (int t = 0; t < 5; t++){
      num[t] = Serial.parseInt();
    }
    Serial.flush();
 }
 servo3_control_speed(num[2]);
 servo2_control_speed(num[1]);
 servo1_control_speed(num[0]);
 servo4_control_speed(num[3]);
  }
}

//void serial_control(){
//  while(num[4]==1){
////  if(Serial.available()>4 & Serial.available()<6){ 
//  while (Serial.available()<6) {
//    for (int t = 0; t < 5; t++){
//      num[t] = Serial.parseInt();
//    }
//    servo3_control_speed(num[2]);
// servo2_control_speed(num[1]);
// servo1_control_speed(num[0]);
// servo4_control_speed(num[3]);
// }
// 
//  }
//}
