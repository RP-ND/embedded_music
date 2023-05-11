int melody[] = { 
494, 659, 523, 494, 494, 440, 440, 494, 330, 494, 494, 440, 440, 494, 330, 494, 494, 440, 494, 494, 494, 110, 0, 0, 0 
};
int noteDurations[] = { 
500, 1000, 500, 500, 500, 500, 500, 250, 250, 500, 500, 500, 500, 250, 250, 500, 500, 1000, 500, 500, 500, 500, 500, 1000, 0 
};

// This takes a bit to get started.

void setup() {
  
  for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(int); thisNote++)
  {    
    tone(11, melody[thisNote], noteDurations[thisNote] * .7);    
    delay(noteDurations[thisNote]);    
    noTone(11);
  }
}

void loop() {
  // no need to repeat the melody.
}
