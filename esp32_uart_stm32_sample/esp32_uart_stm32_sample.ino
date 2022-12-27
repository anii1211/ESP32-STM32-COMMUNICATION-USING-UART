void setup() {
  Serial.begin(115200);
  Serial2.begin(115200);

 Serial.println("Starting...UART");
 delay(1000);
 char str[] = {"STM32"};
   Serial2.write(str);
   updateSerial();

}

void loop() {
  
   updateSerial();
}

void updateSerial() {
  delay(10);
  while(Serial.available())
  {
    Serial2.write(Serial.read());
  }
  while(Serial2.available())
  {
    Serial.write(Serial2.read());
  }
}
