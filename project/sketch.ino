#define leds 4
#define butao 2

int roxinhu[leds] = {15, 0, 16, 5};
int rosinha[leds] = {19, 21, 22, 23};

void setup() {
 for(int i = 0; i < leds; i++){
    pinMode(roxinhu[i], OUTPUT);
    pinMode(rosinha[i], OUTPUT);
 }
 pinMode(butao, INPUT_PULLUP);
}

void loop() {
  while(digitalRead(butao) == HIGH){
    for(int i = 0; i < leds; i++){
      digitalWrite(roxinhu[i], HIGH);
      digitalWrite(rosinha[leds - 1 - i], HIGH);
      delay(250);
      digitalWrite(roxinhu[i], LOW);
      digitalWrite(rosinha[leds - 1 - i], LOW);
    }
  }
}
