#define LED1 13
#define LED2 12
#define LED3 11
#define LED4 10

#define LEDON HIGH
#define LEDOFF LOW

#define viive 1000


void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  Serial.begin(9600);
}

void turnOn(int led){
  digitalWrite(led, LEDON);
}

void turnOff(int led){
  digitalWrite(led, LEDOFF);
}

void nolla (){
  turnOff (LED1);
  turnOff (LED2);
  turnOff (LED3);
  turnOff (LED4);
}

void yksi(){
  turnOn  (LED1);
  turnOff (LED2);
  turnOff (LED3);
  turnOff (LED4);
}

void kaksi(){
  turnOff (LED1);
  turnOn  (LED2);
  turnOff (LED3);
  turnOff (LED4);
}

void kolme(){
  turnOn  (LED1);
  turnOn  (LED2);
  turnOff (LED3);
  turnOff (LED4);
}

void nelja(){
  turnOff (LED1);
  turnOff (LED2);
  turnOn  (LED3);
  turnOff (LED4);
}

void viisi(){
  turnOn  (LED1);
  turnOff (LED2);
  turnOn  (LED3);
  turnOff (LED4);
}

void kuusi(){
  turnOff (LED1);
  turnOn  (LED2);
  turnOn  (LED3);
  turnOff (LED4);
}

void seiska(){
  turnOn  (LED1);
  turnOn  (LED2);
  turnOn  (LED3);
  turnOff (LED4);   
}

void kasi(){
  turnOff (LED1);
  turnOff (LED2);
  turnOff (LED3);
  turnOn  (LED4);
}

void ysi(){
  turnOn  (LED1);
  turnOff (LED2);
  turnOff (LED3);
  turnOn  (LED4);
}

void kymppi() {
  turnOn  (LED1);
  turnOn  (LED2);
  turnOn  (LED3);
  turnOn  (LED4);   
}

void loop() {
  nolla();
  delay(viive);
  yksi();
  delay(viive);
  kaksi();
  delay(viive);
  kolme();
  delay(viive);
  nelja();
  delay(viive);
  viisi();
  delay(viive);
  kuusi();
  delay(viive);
  seiska();
  delay(viive);
  kasi();
  delay(viive);
  ysi();
  delay(viive);
  kymppi();
  delay(viive);
}
