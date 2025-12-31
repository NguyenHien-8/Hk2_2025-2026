#include <Arduino.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("Hello World!");
  delay(1500);
  for(int i = 0; i < 10; i++) {
    Serial.print(i);
    if(i == 9){Serial.println(" ");}else{Serial.print(", ");}
    delay(500);
  }
}
