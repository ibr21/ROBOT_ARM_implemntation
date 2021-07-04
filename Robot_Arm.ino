/*
  This program controls five servo motors, which consequently controls the robot arm
*/
  #include <Servo.h>
  Servo M1,M2,M3,M4,M5,M6;
  
  int port1=A1;
  int port2=A2;
  int port3=A3;
  int port4=A4;
  int port5=A5;
  
  int port1_val;
  int port2_val;
  int port3_val;
  int port4_val;
  int port5_val;
  
  void setup() {
    M1.attach(8);
    M2.attach(9);
    M3.attach(10);
    M4.attach(11);
    M5.attach(12);
    
  }


void loop() {
    port1_val=analogRead(port1);
    port1_val=map(port1_val,0,1023,0,90);
    M1.write(port1_val);
    delay(15);
    
    
    port2_val=analogRead(port2);
    port2_val=map(port2_val,0,1023,0,90);
    M2.write(port2_val);
    delay(15);
    
      port3_val=analogRead(port3);
    port3_val=map(port3_val,0,1023,0,90);
    M3.write(port3_val);
    delay(15);
    
      port4_val=analogRead(port4);
    port4_val=map(port4_val,0,1023,0,90);
    M4.write(port4_val);
    delay(15);
    
      port5_val=analogRead(port5);
    port5_val=map(port5_val,0,1023,0,90);
    M5.write(port5_val);
    delay(15);
    
}
