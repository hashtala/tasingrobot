#include "stm32f7xx_hal.h"
#include "arm_math.h"

char notes_array[36][2] = {"G0", "G#","A0", "A#", "B0", "C0", "C#", "D0", "D#", "E0", "F0", "F#",
	                       "G0", "G#","A0", "A#", "B0", "C0", "C#", "D0", "D#", "E0", "F0", "F#",
                          "G0", "G#","A0", "A#", "B0", "C0", "C#", "D0", "D#", "E0", "F0", "F#"};

													
float32_t note_frequencies[36] = {196,
 207.65476649456002,
 220.00256146892983,
 233.08459454099852,
 246.9445257800523,
 261.628611418197,
 277.18585822623305,
 293.66818706919713,
 311.1306061874229,
 329.63139478142966,
 349.2322975133363,
 369.9987305739314,
 392.00000000312934,
 415.30953299243544,
 440.0051229413722,
 466.1691890857184,
 493.88905156404724,
 523.2572228405711,
 554.3717164568916,
 587.3363741430829,
 622.2612123798134,
 659.2627895681223,
 698.4645950322484,
 739.9974611537702,
 784.0000000125174,
 830.6190659915018,
 880.0102458897695,
 932.3383781788798,
 987.77810313598,
 1046.5144456894966,
 1108.7434329226344,
 1174.6727482955434,
 1244.522424769562,
 1318.5255791467705,
 1396.9291900756486,
 1479.9949223193555};
 
 char scale_notes[7][2] = {"A#", "C0", "D0", "D#", "F0", "G0", "A0"};
