void setup() {
  // put your setup code here, to run once:
 int Sensor1 =  8; 
 int Sensor2 =  9;
 int sensorState1 = 0;
 int sensorState2 = 0;
 int LEDred1 = 3;
 int LEDred2 = 4;
 
void setup()
Serial.begin(9600); 
pinMode(LEDred1,OUTPUT);
pinMode(LEDred2,OUTPUT); 
}

void loop()
 delay(5000);
 sensorState1 = digitalRead(Sensor1);
 sensorState2 = digitalRead(Sensor2);
 digitalWrite(LEDred1,LOW);
 digitalWrite(LEDred2,LOW);
  
 if(sensorState1==LOW &&  sensorState2==HIGH){
 digitalWrite(LEDred1,HIGH);
 digitalWrite(LEDred2,LOW);
 
 Serial.begin(9600); 
 Serial.print("\r");
 delay(1000);                  
 Serial.print("AT+CMGF=1\r");    
 delay(1000);
 Serial.print("AT+CMGS=\"8485898507\"\r");    
 delay(1000);
 //The text of the message to be sent.
 Serial.print("CLEAN TOILET NO.1,S5, JABALPUR EXP(12160)");   
 delay(1000);
 Serial.write(0x1A);
 delay(10000);
 } 

 else if(sensorState1==HIGH &&  sensorState2==LOW){
 digitalWrite(LEDred1,LOW);
 digitalWrite(LEDred2,HIGH);
 
 Serial.begin(9600); 
 Serial.print("\r");
 delay(1000);                  
 Serial.print("AT+CMGF=1\r");    
 delay(1000);
 Serial.print("AT+CMGS=\"8485898507\"\r");    
 delay(1000);
 //The text of the message to be sent.
 Serial.print("CLEAN TOILET NO.2,S5, JABALPUR EXP(12160)");   
 delay(1000);
 Serial.write(0x1A);
 delay(5000);
 } 
else if(sensorState1==LOW &&  sensorState2==LOW){
 digitalWrite(LEDred1,HIGH);
 digitalWrite(LEDred2,HIGH);
 
 Serial.begin(9600); 
 Serial.print("\r");
 delay(1000);                  
 Serial.print("AT+CMGF=1\r");    
 delay(1000);
 Serial.print("AT+CMGS=\"8485898507\"\r");    
 delay(1000);
 //The text of the message to be sent.
 Serial.print("CLEAN TOILET NO.1 & 2 ,S5, JABALPUR EXP(12160)");   
 delay(1000);
 Serial.write(0x1A);
 delay(5000);
}
}

//8407965626

}

void loop() {
  // put your main code here, to run repeatedly:

}
