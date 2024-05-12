#include <Arduino.h>
#include "pitches.h"

#define buzzer_pin 25

struct Note {
  int pitch;
  int duration;
};

Note birthday_melody[] = {
  {NOTE_G3, 4}, {NOTE_G3, 8}, {NOTE_A3, 8}, {NOTE_G3, 4}, {NOTE_C4, 4}, {NOTE_B3, 4}, {0, 4},
  {NOTE_G3, 4}, {NOTE_G3, 8}, {NOTE_A3, 8}, {NOTE_G3, 4}, {NOTE_D4, 4}, {NOTE_C4, 4}, {0, 4},
  {NOTE_G3, 4}, {NOTE_G3, 8}, {NOTE_G4, 8}, {NOTE_E4, 4}, {NOTE_C4, 4}, {NOTE_B3, 4}, {NOTE_A3, 4}, {0, 4},
  {NOTE_F4, 4}, {NOTE_F4, 8}, {NOTE_E4, 8}, {NOTE_C4, 4}, {NOTE_D4, 4}, {NOTE_C4, 4}
};

void play(Note melody[], int size);

void setup() {
  pinMode(buzzer_pin, OUTPUT);
  int notes = sizeof(birthday_melody) / sizeof(birthday_melody[0]);
  play(birthday_melody, notes);
}

void loop() {
  
}

void play(Note melody[], int size) {
  for (int thisNote = 0; thisNote < size; thisNote++) {
    int noteDuration = 1000 / (melody[thisNote].duration);
    tone(buzzer_pin, melody[thisNote].pitch, noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(buzzer_pin);
  }
}
