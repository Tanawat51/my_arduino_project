#include <Arduino.h>
#define SW 2
#define SW1 3
boolean ledStatut = 0;

int ledPin[] = { 5,6,7,8,9,10,11 };
void S1();
void S2();

void setup() {
  pinMode(SW, INPUT);
  pinMode(SW1, INPUT);
  for (int i = 0;i <= 6;i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  S1();
  S2();
}


//****************** */
void S1() {
  if (digitalRead(SW) == 0) {
    if (ledStatut == 0) {
      for (int i = 0;i <= 6;i++) {
        digitalWrite(ledPin[i], HIGH);
        delay(100);
      }
      ledStatut = 1;
    }
    else {

      for (int i = 7;i >= 0;i--) {
        digitalWrite(ledPin[i], LOW);
        delay(100);
      }
      ledStatut = 0;
    }

  }
}

void S2() {
  if (digitalRead(SW1) == 0) {
    if (ledStatut == 0) {
      for (int i = 0;i <= 6;i++) {
        digitalWrite(ledPin[i], HIGH);
        delay(50);
      }
      ledStatut = 1;
    }
    else {

      for (int i = 7;i >= 0;i--) {
        digitalWrite(ledPin[i], LOW);
        delay(50);
      }
      ledStatut = 0;
    }

  }
}
