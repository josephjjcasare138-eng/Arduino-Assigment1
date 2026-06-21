

void flashLED(int times) {
  for(int i = 0; i < times; i++) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);


  }
}

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  int startValue = 5;
  Serial.println("===========Smart Countdown Starting======");


  while (startValue > 0) {
    Serial.print("Count: ");
    Serial.println(startValue);

    flashLED(startValue);
    delay(1000);
    startValue--;
  }

  Serial.println("======== Countdown Completed ============= ");

}



void loop() {
  // put your main code here, to run repeatedly:

}
