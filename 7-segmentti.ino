#define LED1 5
#define LED2 4
#define LED3 9
#define LED4 10
#define LED5 11
#define LED6 6
#define LED7 7
#define DOT 8

#define LEDON LOW
#define LEDOFF HIGH
#define WAIT 500


void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(DOT, OUTPUT);
  allOff();
}
//Sytytä parametrina annettu ledi
void turnOn(int led){
  digitalWrite(led, LEDON);
}
//Sammuta parametrina annuttu ledi
void turnOff(int led){
  digitalWrite(led, LEDOFF);
}

void allOff(){
  turnOff (LED1);
  turnOff (LED2);
  turnOff (LED3);
  turnOff (LED4);
  turnOff (LED5);
  turnOff (LED6);
  turnOff (LED7);
  turnOff (DOT);
}

void nolla(){
  turnOn  (LED1);
  turnOn  (LED2);
  turnOn  (LED3);
  turnOn  (LED4);
  turnOn  (LED5);
  turnOn  (LED6);
  turnOff (LED7);
  turnOff (DOT);
}
void yksi(){
  turnOff (LED1);
  turnOn  (LED2);
  turnOn  (LED3);
  turnOff (LED4);
  turnOff (LED5);
  turnOff (LED6);
  turnOff (LED7);
  turnOff (DOT);
}
void kaksi(){
  turnOn  (LED1);
  turnOn  (LED2);
  turnOff (LED3);
  turnOn  (LED4);
  turnOn  (LED5);
  turnOn  (LED7);
  turnOff (LED6);
  turnOff (DOT);
}
void kolme(){
  turnOn  (LED1);
  turnOn  (LED2);
  turnOn  (LED3);
  turnOn  (LED4);
  turnOff (LED5);
  turnOff (LED6);
  turnOn  (LED7);
  turnOff (DOT);
}
void nelkku(){
  turnOff (LED1);
  turnOn  (LED2);
  turnOn  (LED3);
  turnOff (LED4);
  turnOff (LED5);
  turnOn  (LED6);
  turnOn  (LED7);
  turnOff (DOT);
}
void femma(){
  turnOn  (LED1);
  turnOff (LED2);
  turnOn  (LED3);
  turnOn  (LED4);
  turnOff (LED5);
  turnOn  (LED6);
  turnOn  (LED7);
  turnOff (DOT);
}
void kutonen(){
  turnOn  (LED1);
  turnOff (LED2);
  turnOn  (LED3);
  turnOn  (LED4);
  turnOn  (LED5);
  turnOn  (LED6);
  turnOn  (LED7);
  turnOff (DOT);
}
void seiska(){
  turnOn  (LED1);
  turnOn  (LED2);
  turnOn  (LED3);
  turnOff (LED4);
  turnOff (LED5);
  turnOff (LED6);
  turnOff (LED7);
  turnOff (DOT);
}
void kasi(){
  turnOn  (LED1);
  turnOn  (LED2);
  turnOn  (LED3);
  turnOn  (LED4);
  turnOn  (LED5);
  turnOn  (LED6);
  turnOn  (LED7);
  turnOff  (DOT);
}
void ysi(){
  turnOn  (LED1);
  turnOn  (LED2);
  turnOn  (LED3);
  turnOn  (LED4);
  turnOff (LED5);
  turnOn  (LED6);
  turnOn  (LED7);
  turnOff (DOT);
}
void piste(){
  turnOff  (LED1);
  turnOff  (LED2);
  turnOff  (LED3);
  turnOff  (LED4);
  turnOff  (LED5);
  turnOff  (LED6);
  turnOff  (LED7);
  turnOn   (DOT);
}

void loop() {
  allOff();
  delay(WAIT);
  nolla();
  delay(WAIT);
  yksi();
  delay(WAIT);
  kaksi();
  delay(WAIT);
  kolme();
  delay(WAIT);
  nelkku();
  delay(WAIT);
  femma();
  delay(WAIT);
  kutonen();
  delay(WAIT);
  seiska();
  delay(WAIT);
  kasi();
  delay(WAIT);
  ysi();
  delay(WAIT);
  piste();
  delay(WAIT);
}
