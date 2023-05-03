#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST 0

int maintempo =2500;
int tempo = .5* maintempo; 
int half = tempo/2;
int quarter = tempo/4;
int eighth = tempo/8;
int sixteenth = tempo/16;
int dotquarter = tempo * 0.375;
int dothalf = tempo/3;
int whole = tempo;
int smallbreak = 100;

void setup() 
{
for (int i = 0; i < 2; i++){

//BEGINNING OF ALBERTO'S PART  
    tone(13,NOTE_C7);
    delay(quarter);
    noTone(13);
    delay(100);
    //C7 "Fly"
    
    tone(13,NOTE_B7);
    delay(quarter);
    noTone(13);
    delay(100);
    //B7 "me"

    
    tone(13,NOTE_A7);
    delay(eighth);
    noTone(13);
    delay(100);
    //A7 "to"

    
    tone(13,NOTE_G7);
    delay(quarter);
    noTone(13);
    delay(200);
    //G7 "the"

    tone(13,NOTE_F7);
    delay(quarter);
    noTone(13);
    delay(200);
    //F7 "moon"
    
    tone(13,NOTE_G7);
    delay(eighth);
    noTone(13);
    delay(100);
    //G7 "and"

    
    tone(13,NOTE_A7);
    delay(quarter);
    noTone(13);
    delay(100);
    //A7 "let"

    
    tone(13,NOTE_C7);
    delay(quarter);
    noTone(13);
    delay(100);
    //C7 "me"

    tone(13,NOTE_B7);
    delay(quarter);
    noTone(13);
    delay(100);
    //B7 "play"
    
    tone(13,NOTE_A7);
    delay(quarter);
    noTone(13);
    delay(100);
    //A7 "a-"

    tone(13,NOTE_G7);
    delay(eighth);
    noTone(13);
    delay(100);
    //G7 "mong"

    
    tone(13,NOTE_A7);
    delay(quarter);
    noTone(13);
    delay(200);
    //A7 "the"

    tone(13,NOTE_E7);
    delay(whole);
    noTone(13);
    delay(100);
    //E7 "stars"

    tone(13,NOTE_A7);
    delay(quarter);
    noTone(13);
    delay(100);
    //A7 "let"

    tone(13,NOTE_G7);
    delay(quarter);
    noTone(13);
    delay(100);
    //G7 "me"

    tone(13,NOTE_F7);
    delay(eighth);
    noTone(13);
    delay(100);
    //F7 "see"

    tone(13,NOTE_E7);
    delay(quarter);
    noTone(13);
    delay(200);
    //E7 "what"

    tone(13,NOTE_D7);
    delay(quarter);
    noTone(13);
    delay(200);
    //D7 "spring"

    tone(13,NOTE_E7);
    delay(eighth);
    noTone(13);
    delay(100);
    //E7 "is"

    tone(13,NOTE_F7);
    delay(quarter);
    noTone(13);
    delay(100);
    //F7 "like"

    tone(13,NOTE_A7);
    delay(quarter);
    noTone(13);
    delay(100);
    //A7 "on"

    tone(13,NOTE_G7);
    delay(quarter);
    noTone(13);
    delay(100);
    //G7 "ju-"

    tone(13,NOTE_F7);
    delay(quarter);
    noTone(13);
    delay(100);
    //F7 "pi-"

    tone(13,NOTE_E7);
    delay(eighth);
    noTone(13);
    delay(100);
    //E7 "ter"

    tone(13,NOTE_D7);
    delay(quarter);
    noTone(13);
    delay(200);
    //D7 "and"

    tone(13,NOTE_C7);
    delay(whole);
    noTone(13);
    delay(100);
    //C7 "mars"
    
    tone(13,NOTE_C7);
    delay(quarter);
    noTone(13);
    delay(100);
    //C7 "in"
//END OF ALBERTO'S PART
//BEGINNING OF LAWRENCE'S PART
    tone(13,NOTE_D7);
    delay(eighth);
    noTone(13);
    delay(100);
    //D7 "oth-"




    tone(13,NOTE_A7);
    delay(quarter);
    noTone(13);
    delay(100);
    //A7 "er"




    tone(13,NOTE_A7);
    delay(eighth);
    noTone(13);
    delay(0);
    //A7 "words"




    tone(13,NOTE_A7);
    delay(half);
    noTone(13);
    delay(0);
    //A7 "---"




    tone(13,NOTE_A7);
    delay(quarter);
    noTone(13);
    delay(100);
    //A7 "---"




    tone(13,NOTE_C7);
    delay(half);
    noTone(13);
    delay(100);
    //C7 "hold"




    tone(13,NOTE_B7);
    delay(quarter);
    noTone(13);
    delay(100);
    //B7 "my"




    tone(13,NOTE_G7);
    delay(whole);
    noTone(13);
    delay(0);
    //G7 "hand"




    tone(13,NOTE_G7);
    delay(half);
    noTone(13);
    delay(200);
    //G7 "---"




    tone(13,NOTE_B7);
    delay(quarter);
    noTone(13);
    delay(100);
    //B7 "in"




    tone(13,NOTE_C7);
    delay(eighth);
    noTone(13);
    delay(100);
    //C7 "oth-"




    tone(13,NOTE_F7);
    delay(quarter);
    noTone(13);
    delay(100);
    //F7 "er"




    tone(13,NOTE_F7);
    delay(eighth);
    noTone(13);
    delay(0);
    //F7 "words"




    tone(13,NOTE_F7);
    delay(half);
    noTone(13);
    delay(0);
    //F7 "---"




    tone(13,NOTE_F7);
    delay(quarter);
    noTone(13);
    delay(100);
    //F7 "---"




    tone(13,NOTE_A7);
    delay(half);
    noTone(13);
    delay(100);
    //A7 "dar-"


   
    tone(13,NOTE_G7);
    delay(quarter);
    noTone(13);
    delay(100);
    //G7 "ling"




    tone(13,NOTE_F6);
    delay(half);
    noTone(13);
    delay(100);
    //F6 "kiss"




    tone(13,NOTE_E7);
    delay(half);
    noTone(13);
    delay(0);
    //E7 "me"




    tone(13,NOTE_E7);
    delay(whole);
    noTone(13);
    delay(100);
    //E7 "eee"




    tone(13,NOTE_C7);
    delay(quarter);
    noTone(13);
    delay(100);
    //C7 "fill"




    tone(13,NOTE_B7);
    delay(quarter);
    noTone(13);
    delay(100);
    //B7 "my"




    tone(13,NOTE_A7);
    delay(eighth);
    noTone(13);
    delay(100);
    //A7 "heart"




    tone(13,NOTE_G7);
    delay(quarter);
    noTone(13);
    delay(200);
    //G7 "with"




    tone(13,NOTE_F7);
    delay(quarter);
    noTone(13);
    delay(200);
    //F7 "song"




    tone(13,NOTE_G7);
    delay(eighth);
    noTone(13);
    delay(100);
    //G7 "and"




    tone(13,NOTE_A7);
    delay(quarter);
    noTone(13);
    delay(100);
    //A7 "let"




    tone(13,NOTE_C7);
    delay(quarter);
    noTone(13);
    delay(100);
    //C7 "me"
//END OF LAWRENCE'S PART
//BEGINNING OF GIOVANNI'S PART
    tone(13,NOTE_B7);
    delay(quarter);
    noTone(13);
    delay(100);
    //B7 "sing"


    tone(13,NOTE_A7);
    delay(quarter);
    noTone(13);
    delay(100);
    //A7 "for-"
   
    tone(13,NOTE_G7);
    delay(eighth);
    noTone(13);
    delay(100);
    //G7 "ev-"
   
    tone(13,NOTE_F7);
    delay(quarter);
    noTone(13);
    delay(200);
    //F7 "er"
   
    tone(13,NOTE_E7);
    delay(whole);
    noTone(13);
    delay(100);
    //E7 "more"
   
    tone(13,NOTE_A7);
    delay(quarter);
    noTone(13);
    delay(100);
    //A7 "you"
   
    tone(13,NOTE_G7);
    delay(quarter);
    noTone(13);
    delay(100);
    //G7 "are"
   
    tone(13,NOTE_F7);
    delay(eighth);
    noTone(13);
    delay(100);
    //F7 "all"
   
    tone(13,NOTE_E7);
    delay(quarter);
    noTone(13);
    delay(200);
    //E7 "I"
   
    tone(13,NOTE_D7);
    delay(quarter);
    noTone(13);
    delay(100);
    //D7 "long"
   
    tone(13,NOTE_E7);
    delay(quarter);
    noTone(13);
    delay(100);
    //E7 "for"

    tone(13,NOTE_F7);
    delay(quarter);
    noTone(13);
    delay(100);
    //F7 "all"
   
    tone(13,NOTE_A7);
    delay(quarter);
    noTone(13);
    delay(100);
    //A7 "I"
   
    tone(13,NOTE_G7);
    delay(quarter);
    noTone(13);
    delay(100);
    //G7 "wor-"
   
    tone(13,NOTE_F7);
    delay(quarter);
    noTone(13);
    delay(100);
    //F7 "ship"

    
   
    tone(13,NOTE_E7);
    delay(eighth);
    noTone(13);
    delay(100);
    //E7 "and"
   
    tone(13,NOTE_D7);
    delay(quarter);
    noTone(13);
    delay(200);
    //D7 "a"
   
    tone(13,NOTE_C7);
    delay(whole);
    noTone(13);
    delay(200);
    //C7 "dore"
   
    tone(13,NOTE_C7);
    delay(quarter);
    noTone(13);
    delay(100);
    //C7 "in"
   
    tone(13,NOTE_D7);
    delay(eighth);
    noTone(13);
    delay(100);
    //D7 "oth-"
   
    tone(13,NOTE_A7);
    delay(quarter);
    noTone(13);
    delay(100);
    //A7 "er"
   
    tone(13,NOTE_A7);
    delay(eighth);
    noTone(13);
    delay(0);
    //A7 "words"
   
    tone(13,NOTE_A7);
    delay(half);
    noTone(13);
    delay(0);
    //A7 "---"
   
    tone(13,NOTE_A7);
    delay(quarter);
    noTone(13);
    delay(100);
    //A7 "---"
   
    tone(13,NOTE_C7);
    delay(half);
    noTone(13);
    delay(100);
    //C7 "please" 
   
    tone(13,NOTE_B7);
    delay(quarter);
    noTone(13);
    delay(100);
    //B7 "be"
   
    tone(13,NOTE_G7);
    delay(whole);
    noTone(13);
    delay(0);
    //G7 "true"
   
    tone(13,NOTE_G7);
    delay(half);
    noTone(13);
    delay(200);
    //G7 "---"
   
    tone(13,NOTE_G7);
    delay(quarter);
    noTone(13);
    delay(100);
    //G7 "in"
   
    tone(13,NOTE_A7);
    delay(eighth);
    noTone(13);
    delay(100);
    //A7 "oth-"
   
    tone(13,NOTE_C7);
    delay(quarter);
    noTone(13);
    delay(100);
    //C7 "er"
   
    tone(13,NOTE_C7);
    delay(eighth);
    noTone(13);
    delay(0);
    //C7 "words"
   
    tone(13,NOTE_C7);
    delay(half);
    noTone(13);
    delay(0);
    //C7 "---"
   
    tone(13,NOTE_C7);
    delay(quarter);
    noTone(13);
    delay(100);
    //C7 "---"
   
    tone(13,NOTE_C7);
    delay(half);
    noTone(13);
    delay(100);
    //C7 "I"
   
    tone(13,NOTE_D7);
    delay(quarter);
    noTone(13);
    delay(100);
    //D7 "love"
   
    tone(13,NOTE_C6);
    delay(whole);
    noTone(13);
    delay(1000);
    //C6 "you"
//END OF GIOVANNI'S PART
//LOOPS AGAIN

}
//BEGINNING OF TISE'S PART
 tone(13,NOTE_C7);
 delay(quarter);
 noTone(13);
 delay(100);
 //C7 "in"

 tone(13,NOTE_D7);
 delay(eighth);
 noTone(13);
 delay(100);
 //D7 "oth"

 tone(13,NOTE_A7);
 delay(quarter);
 noTone(13);
 delay(100);
//A7 "er" 

 tone(13,NOTE_A7);
 delay(eighth);
 noTone(13);
 delay(0);
 //A7 "words"
 
 tone(13,NOTE_A7);
 delay(half);
 noTone(13);
 delay(0);
 //A7 "---"

 tone(13,NOTE_A7);
 delay(quarter);
 noTone(13);
 delay(100);
 //A7 "---"

 tone(13,NOTE_B7);
 delay(half);
 noTone(13);
 delay(100);
 //B7 "I"

 tone(13,NOTE_D7);
 delay(quarter);
 noTone(13);
 delay(100);
 //D7 "love"

 tone(13,NOTE_C6);
 delay(whole);
 noTone(13);
 delay(0);
 //C6 "you"

 tone(13,NOTE_C6);
 delay(half);
 noTone(13);
 delay(200);
 //C6 "---"

//END OF TISE'S PART & SONG
}

void loop()
{

}
