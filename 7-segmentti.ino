//Tämän harjoituksen tarkoitus on piirtää numero 42 segmenttinäytölle
//viiveen ja loopin avulla. Numeroiden määrää voidaan lisätä tai vähentää
//looppia muokkaamalla.


#define LED1 13
#define LED2 12
#define LED3 11
#define LED4 10
#define SEG1  7 //1. näyttö
#define SEG2  6 //2. näyttö
#define SEG3  5 //3. näyttö
#define SEG4  4 //4. näyttö


#define LEDON HIGH
#define LEDOFF LOW

#define viive 1


void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(SEG1, OUTPUT);
  pinMode(SEG2, OUTPUT);
  pinMode(SEG3, OUTPUT);
  pinMode(SEG4, OUTPUT);  
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
  /*digitalWrite(SEG1, HIGH);
  nolla();
  delay(viive);
  digitalWrite(SEG1, LOW);
  digitalWrite(SEG2, HIGH);
  yksi();
  delay(viive);
  digitalWrite(SEG2,LOW);*/
  digitalWrite(SEG2, HIGH);
  kaksi();
  delay(viive);
  digitalWrite(SEG2, LOW);
  /*digitalWrite(SEG2, HIGH);
  kolme();
  delay(viive);
  digitalWrite(SEG2, LOW);*/
  digitalWrite(SEG1, HIGH);
  nelja();
  delay(viive);
  digitalWrite(SEG1, LOW);
  /*digitalWrite(SEG2, HIGH);
  viisi();
  delay(viive);
  digitalWrite(SEG2, LOW);
  digitalWrite(SEG1, HIGH);
  kuusi();
  delay(viive);
  digitalWrite(SEG1, LOW);
  digitalWrite(SEG2, HIGH);
  seiska();
  delay(viive);
  digitalWrite(SEG2, LOW);
  digitalWrite(SEG1, HIGH);
  kasi();
  delay(viive);
  digitalWrite(SEG1, LOW);
  digitalWrite(SEG2, HIGH);
  ysi();
  delay(viive);
  digitalWrite(SEG2, LOW);
  digitalWrite(SEG1, HIGH);
  kymppi();
  delay(viive);
  digitalWrite(SEG1, LOW);*/
}
