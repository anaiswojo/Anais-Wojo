#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
}

void loop() {
  CircuitPlayground.clearPixels();

  delay(200);

  CircuitPlayground.setPixelColor(0, 255,   0,   0);
  delay(270);
  CircuitPlayground.setPixelColor(1, 255, 69,   0);
  delay(350);
  CircuitPlayground.setPixelColor(2,   255, 215,   0);
  delay(450);
  CircuitPlayground.setPixelColor(3, 173, 255, 47);
  delay(600);
  CircuitPlayground.setPixelColor(4, 0, 128, 0);
  delay(700);
  
  CircuitPlayground.setPixelColor(5, 0, 191, 255);
  delay(800);
  CircuitPlayground.setPixelColor(6, 0, 0, 255);
  delay(900);
  CircuitPlayground.setPixelColor(7, 138, 43, 226);
  delay(1000);
  CircuitPlayground.setPixelColor(8, 128, 0, 128);
  delay(1100);
  CircuitPlayground.setPixelColor(9, 199, 21, 133);
 
  delay(1200);
}