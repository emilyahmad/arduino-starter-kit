//www.elegoo.com
//2016.12.08

#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};

  int playNote = 200;
  
  int longDur = 600;
  int medDur = 500;
  int shortDur = 300;
 
void setup() {
 
}
 
void loop() {
  tone(8, melody[0], playNote);
  delay(longDur);  
  tone(8, melody[1], playNote);
  delay(shortDur);  
  tone(8, melody[2], playNote);
  delay(medDur);  
  tone(8, melody[2], playNote);
  delay(longDur);

  tone(8, melody[1], playNote);
  delay(shortDur);
  tone(8, melody[0], playNote);
  delay(shortDur);
  tone(8, melody[1], playNote);
  delay(shortDur); 
  tone(8, melody[2], playNote);
  delay(shortDur);
  tone(8, melody[0], playNote);
  delay(medDur);
  tone(8, melody[4], 300);
  delay(longDur);


  // for (int i = 0; i < 8; i++) {
  //   // pin8 output the voice, every scale is 0.5 sencond
  //   tone(8, melody[i], playNote);
     
  //   // Output the voice after several minutes
  //   delay(300);
  // }
   
  // restart after two seconds 
  delay(10000);
}