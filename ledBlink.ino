int ledPin=13
void setup() {
pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(ledPin,HIGH);
  delay(1000);
  digitalWrite(ledPin,LOW);
  delay(1000);
}
