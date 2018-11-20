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

#define  segNumFour 1
#define  segNumTwo 0

int segState = segNumFour;

unsigned long previousMillis = 0;
const long interval = 1000; 


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


void loop() {
milli(); 
segDisplays();
}


void milli(){
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval){
    previousMillis = currentMillis;
    if(segState == segNumFour){
      segState = segNumTwo;
    }else{
      segState = segNumFour;
    }
  }
}


void segDisplays(){
  digitalWrite(SEG1, HIGH);
  if(segState == segNumFour){
    showNum42();
  }
  if (segState == segNumTwo){
    showNum24();
  }
}


void showNum42(){
  digitalWrite(SEG1, HIGH);
  showNum(4);
  delay(viive);
  digitalWrite(SEG1, LOW);
  digitalWrite(SEG2, HIGH);
  showNum(2);
  delay(viive);
  digitalWrite(SEG2, LOW);
}


void showNum24(){
  digitalWrite(SEG1, HIGH);
  showNum(2);
  delay(viive);
  digitalWrite(SEG1, LOW);
  digitalWrite(SEG2, HIGH);
  showNum(4);
  delay(viive);
  digitalWrite(SEG2, LOW);
}


void showNum (int number){
  if (number == 0){nolla();}
  else if (number == 1){yksi();}
  else if (number == 2){kaksi();}
  else if (number == 3){kolme();}
  else if (number == 4){nelja();}
  else if (number == 5){viisi();}
  else if (number == 6){kuusi();}
  else if (number == 7){seiska();}
  else if (number == 8){kasi();}
  else if (number == 0){ysi();}
}



void turnOn(int led){
  digitalWrite(led, LEDON);
}

void turnOff(int led){
  digitalWrite(led, LEDOFF);
}




//Binäärinumerot

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


