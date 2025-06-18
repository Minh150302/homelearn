// Define the LED pin
int led = 2;

void setup() {
  // Initialize digital pin as an output.
  Serial.begin(115200);
  Serial.println("Hello, MON!");
  pinMode(led, OUTPUT);
  // pinMode(LED_buildin, OUTPUT);
}

void loop() {
  // Turn the LED on
  Serial.println("ON");
  digitalWrite(led, HIGH);
  delay(1000); // Wait for 1 second

  // Turn the LED off
  Serial.println("OFF");
  digitalWrite(led, LOW);
  delay(1000); // Wait for 1 second
}
