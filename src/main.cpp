#include<Arduino.h>

#define RED_PIN   25
#define GREEN_PIN 26
#define BLUE_PIN  27

void setColor(int r, int g, int b) {
  analogWrite(RED_PIN,   r);
  analogWrite(GREEN_PIN, g);
  analogWrite(BLUE_PIN,  b);
}

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN,  OUTPUT);
  
  Serial.begin(9600);
  Serial.println("RGB LED Test starting...");
}
void loop() {
  Serial.println("RED");
  setColor(255, 0, 0);
  delay(1000);

  Serial.println("GREEN");
  setColor(0, 255, 0);
  delay(1000);
}