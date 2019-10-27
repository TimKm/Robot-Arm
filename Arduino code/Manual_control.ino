void manual_control(){
  Serial.print("Manual control is initialized");
  while(num[4]==1){
   pot1Val = analogRead(pot1);
   if ((pot1Val + 1) <= curvalue1 || (pot1Val - 1) >= curvalue1){
     curvalue1 = pot1Val;
     pot1Angle = map (pot1Val,0,1023,0,180);
     if (pot1Angle != curAngle1){
      curAngle1=pot1Angle;
      servo1_control_speed(pot1Angle);
      
     }
    }
   delay(10);
   
   pot2Val = analogRead(pot2);
   if ((pot2Val + 1) <= curvalue2 || (pot2Val - 1) >= curvalue2){
     curvalue2 = pot2Val;
     pot2Angle = map (pot2Val,0,1023,0,180);
     if (pot2Angle != curAngle2){
      curAngle2=pot2Angle;
      servo2_control_speed(pot2Angle);
     }
    }
   delay(10); 
   
   pot3Val = analogRead(pot3);
   if ((pot3Val + 1) <= curvalue3 || (pot3Val - 1) >= curvalue3){
     curvalue3 = pot3Val;
     pot3Angle = map (pot3Val,0,1023,180,0);
     if (pot3Angle != curAngle3){
      curAngle3=pot3Angle;
      servo3_control_speed(pot3Angle); 
    }
   }
   delay(10);
   
   pot4Val = analogRead(pot4);
   if ((pot4Val + 1) <= curvalue4 || (pot4Val - 1) >= curvalue4){
       curvalue4 = pot4Val;
       pot4Angle = map (pot4Val,0,1023,0,180);
       if (pot4Angle != curAngle4){
        curAngle4=pot4Angle;
        servo4_control_speed(pot4Angle);
    }  
   }
   delay(10);
   if(digitalRead(display_value) == HIGH){
      Serial.print("Servo 1 value =");
      Serial.print(pot1Angle);
      Serial.print(" & Servo 2 value =");
      Serial.print(pot2Angle);
      Serial.print(" & Servo 3 value =");
      Serial.print(pot3Angle);
      Serial.print(" & Servo 4 value =");
      Serial.println(pot4Angle);
    }
    if(digitalRead(exit_manual) == HIGH){
      num[4]=0;
     }
 }
}
