#define LED 2

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, MON!");
  pinMode(LED, OUTPUT);
}

void loop() {
  Serial.println("LED OFF"); // newline after message
  digitalWrite(LED, LOW);
  delay(10);

  Serial.println("LED ON"); // newline after message
  digitalWrite(LED, HIGH);
  delay(10);
}
