#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // Initialize the serial communication at 115200 baud rate
  Serial.begin(115200);
  
  // Print a message to indicate the setup is complete
  Serial.println("Setup complete. Starting loop...");

  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // Print a message to the console every second
  Serial.println("Blink!");
  
  // Delay for 1 second (1000 milliseconds)
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}