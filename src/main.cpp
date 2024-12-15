#include <Arduino.h>

void setup() {
  // Initialize digital pin LED_BUILTIN as an output
  pinMode(LED_BUILTIN, OUTPUT);
  // Start serial communication for debugging
  Serial.begin(9600);
  Serial.println("Arduino Blink Test - Setup Complete");
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED ON");
  delay(1000);  // Wait for 1 second
  
  // Turn the LED off
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED OFF");
  delay(1000);  // Wait for 1 second
}