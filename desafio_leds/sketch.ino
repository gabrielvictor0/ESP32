
const int ledPins[] = {21, 19, 17, 2};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);
const int espera = 500;

void setup() {
  
}

void loop() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], HIGH);
    delay(espera);
    digitalWrite(ledPins[i], LOW);
    delay(espera);
  }
}
