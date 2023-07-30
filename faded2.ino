
#define c3 131      //  white key C3
#define cd3 139      //  black key C3/D3
#define d3 147    //  white key D3
#define de3 156    //  black key D3/E3
#define e3 165    //  white key E3
#define f3 175    //  white key F3
#define fg3 185    //  black key F3/G3
#define g3 196      //  white key G4
#define ga3 208    //  black key G3/A3
#define a3 220      //  white key A3
#define ab3 233      //  black key A3/B3
#define b3 247    //  white key B3
#define c4 262    //  white key C4
#define cd4 277      //  black key C4/D4
#define d4 294    //  white key D4
#define de4 311      //  black key D4/E4
#define e4 330    //  white key E4
#define f4 350    //  white key F4
#define fg4 369      //  black key F4/G4
#define g4 392    //  white key G4
#define ga4 415      //  black key G4/A4
#define a4 440      //  white key A4
#define ab4 466      //  black key A4/B4
#define b4 494    //  white key B4
#define c5 524    //  white key C5
#define cd5 554      //  black key C5/D5
#define d5 588    //  white key D5
#define de5 622      //  black key D5/E5
#define e5 659    //  white key E5
#define f5 698    //  white key F5
#define fg5 739      //  black key F5/G5
#define g5 784    //  white key G5
#define ga5 831    //  black key G5/A5
#define a5 880      //  white key A5
#define ab5 932    //  black key A5/B5
#define b5 988    //  white key B5
#define c6 1047   //  white key C6
#define cd6 1109   //  black key C6/D6
#define d6 1175   //  white key D6
#define de6 1245   //  black key D6/E6
#define e6 1319   //  white key E6
#define f6 1397   //  white key F6
#define fg6 1480     //  black key F6/G6
#define g6 1568   //  white key G6
#define ga6 1661   //  black key G6/A6
#define a6 1760     //  white key A6
#define ab6 1865   //  black key A6/B6
#define b6 1976   //  white key B6

const int notes[] PROGMEM = {
   e4,b4,g4,b4,e4,b4,g4,b4, c4,g4,e4,g4,c4,g4,e4,g4, 
   g4,d5,b4,d5,g4,d5,b4,d5, d4,a4,fg4,a4,d4,a4,fg4,a4,
//   c4,ab3,f4,e4, c4,c4,c4, ab3,ab3,ab3, f4,f4,f4, e4,e4,    // 32 - 47
//   e4,d4,a4,g4, e4,e4,e4, d4,d4,d4, a4,a4,a4, g4,g4,        // 32 - 47
   d4,c4,g4,fg4, d4,d4,d4, c4,c4,c4, g4,g4,g4, fg4,fg4,     // 32 - 47
//   c5,ab4,f5,e5, c5,c5,c5, ab4,ab4,ab4, f5,f5,f5, e5,e5,    // 32 - 47
//   c4,ab3,f4,e4, c4,c4, ab3,ab3, f4,f4, e4,e4,              // 47 - 59   
   d4,c4,g4,fg4, d4,d4, c4,c4, g4,g4, fg4,fg4,              // 47 - 59   
   g4,g4,g4,b4,e5,e5,e5,d5,b4,b4,b4,b4,fg4,fg4,fg4,fg4, fg4,fg4,fg4,fg4,fg4,fg4, fg4,fg4,fg4,fg4, 
   g4,g4,g4,g4,g4,g4, b4,b4,b4,b4, e5,e5,e5,e5,e5,e5, d5,d5, b4,b4,b4,b4,b4,b4, b4,b4,b4,b4, fg4,fg4,fg4,fg4,fg4,fg4,fg4,fg4,
   g4,g4,g4,g4, b4,b4, g5,g5,fg5,fg5, e5,e5,e5,d5,d5,d5, a4,a4,b4,b4,b4,b4, d5,c5,b4,a4,g4,fg4, fg4,fg4,fg4,fg4, a4,a4,fg4,fg4,
};
const int duration[] PROGMEM = {
   233,233,233,233,233,233,233,233, 233,233,233,233,233,233,233,233,
   233,233,233,233,233,233,233,233, 233,233,233,233,233,233,233,233,
   400,400,400,400, 300,300,300, 300,300,300, 300,300,300, 300,300,
   300,300,300,300, 300,300, 300,300, 300,300, 300,300,
   233,233,233,233,233,233,233,233,233,233,233,233,233,233,233,233, 233,233,233,233,233,233, 160,67,160,67,
   233,233,233,233,233,233, 160,67,160,67, 233,233,233,233,233,233, 233,233, 233,233,233,233,233,233, 160,67,160,67, 233,233,233,233,233,233,233,233,
   233,233,233,233, 233,233, 160,67,160,67, 233,233,233,233,233,233, 233,233,233,233,233,233, 233,233,160,67,160,67, 233,233,233,233, 233,233,233,233,
};
const int duration1[] PROGMEM = {
   100,100,100,100,100,100,100,100, 100,100,100,100,100,100,100,100,
   100,100,100,100,100,100,100,100, 100,100,100,100,100,100,100,100,
   2266,2266,2266,2266, 366,1033,366, 366,1033,366, 366,1033,366, 366,3033,
   2366,2366,2366,2366, 1033,1033, 1033,1033, 1033,1033, 1033,2366,
   433,433,433,433,433,433,433,433,433,433,433,433,433,433,433,433, 100,100,100,100,100,100, 66,40,66,40,
   100,100,100,100,100,100, 66,40,66,40, 100,100,100,100,100,100, 100,100, 100,100,100,100,100,100, 66,40,66,40, 100,100,100,100,100,100,100,100,
   100,100,100,100, 100,100, 66,40,66,40, 100,100,100,100,100,100, 100,100,100,100,100,100, 100,100,66,40,66,40, 100,100,100,100, 100,100,100,100, 
};
int buzzer = 12, i=0, j=0, s=0;
int pin1 = 3;
int pwm = 9;
void setup(){
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(pwm, OUTPUT);
  pinMode(pin1, INPUT);  
  digitalWrite(pin1, 0);
}
void loop(){

  digitalWrite(pin1, 0);
  if(digitalRead(pin1)==1){
   delayMicroseconds(1000);

   j=1;
   while(j<=3){
    for(i=0;i<32;i++){
//    for(i=0;i<sizeof(notes)/sizeof(int);i++){
     tone(buzzer, pgm_read_word(&notes[i]));
       delay(pgm_read_word(&duration[i]));
       noTone(buzzer);
       delay(pgm_read_word(&duration1[i]));
    }
    j++;
   }
//   delay(22664);

   j=1;
   while(j<=1){
    for(i=32;i<47;i++){
//    for(i=0;i<sizeof(notes)/sizeof(int);i++){
     tone(buzzer, pgm_read_word(&notes[i]));
       delay(pgm_read_word(&duration[i]));
       noTone(buzzer);
       delay(pgm_read_word(&duration1[i]));
    }
    j++;
   }
   
   j=1;
   while(j<=4){
    for(i=0;i<32;i++){
//    for(i=0;i<sizeof(notes)/sizeof(int);i++){
       tone(buzzer, pgm_read_word(&notes[i]));
       delay(pgm_read_word(&duration[i]));
       noTone(buzzer);
       delay(pgm_read_word(&duration1[i]));
    }
    j++;
   }
   
   j=1;s=31;
   while(j<=3){ 
    if(j==3) s=32;
    for(i=0;i<s;i++){
//    for(i=0;i<sizeof(notes)/sizeof(int);i++){
       tone(buzzer, pgm_read_word(&notes[i]));
       delay(pgm_read_word(&duration[i]));
       noTone(buzzer);
       delay(pgm_read_word(&duration1[i]));
    }
    if(j<3)delay(333);
    j++;
   }
//   delay(22664);

   j=1;
   while(j<=1){
    for(i=47;i<59;i++){
//    for(i=0;i<sizeof(notes)/sizeof(int);i++){
     tone(buzzer, pgm_read_word(&notes[i]));
       delay(pgm_read_word(&duration[i]));
       noTone(buzzer);
       delay(pgm_read_word(&duration1[i]));
    }
    j++;
   }
   
   j=1;s=32;
   while(j<=5){ 
    if(j==5) s=25;
    for(i=0;i<s;i++){
//    for(i=0;i<sizeof(notes)/sizeof(int);i++){
       tone(buzzer, pgm_read_word(&notes[i]));
       delay(pgm_read_word(&duration[i]));
       noTone(buzzer);
       delay(pgm_read_word(&duration1[i]));
    }
    j++;
   }
   
   delay(3000);
  }
}
