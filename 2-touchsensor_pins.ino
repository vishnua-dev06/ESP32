int ledPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  if(( touchRead(T0) < 200)){
    digitalWrite(ledPin, HIGH);
  }
  else
    digitalWrite(ledPin, LOW);
  delay(200);

}
