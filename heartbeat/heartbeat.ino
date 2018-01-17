void setup() {
  Serial.begin(9600);

  pinMode(13,OUTPUT);
}

void loop() {
  delay(1000);
  long time = millis();
  Serial.print(time);
  Serial.println(" sec have elapsed");

  //digitalWrite(13, HIGH);       // sets the digital pin 13 on
  //delay(1000);                  // waits for a second
  //digitalWrite(13, LOW);        // sets the digital pin 13 off
  //delay(1000);                  // waits for a second
  
}
