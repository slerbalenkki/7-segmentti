#define LED1  5  //A
#define LED2  4  //B
#define LED3  9  //C
#define LED4  10 //D
#define LED5  11 //E
#define LED6  6  //F
#define LED7  7  //G
#define DOT   8  //DP

#define LEDON LOW
#define LEDOFF HIGH


void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(DOT, OUTPUT);
  Serial.begin(9600);
  allOff();
}

void showNum(int x){
  if(x==0){
    nolla();
  }else if(x==1){
    yksi();
  }else if(x==2){
    kaksi();
  }else if(x==3){
    kolme();
  }else if(x==4){
    nelja();
  }else if(x==5){
    viisi();
  }else if(x==6){
    kuusi();
  }else if(x==7){
    seitseman();
  }else if(x==8){
    kahdeksan();
  }else if(x==9){
    yhdeksan();
  }else {
    piste();
  }
}

int num=0;
void loop() {

 showNum(num++);
 delay(200);
  if(num==10){
    num=0;
  }
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
void nelja(){
  turnOff (LED1);
  turnOn  (LED2);
  turnOn  (LED3);
  turnOff (LED4);
  turnOff (LED5);
  turnOn  (LED6);
  turnOn  (LED7);
  turnOff (DOT);
}
void viisi(){
  turnOn  (LED1);
  turnOff (LED2);
  turnOn  (LED3);
  turnOn  (LED4);
  turnOff (LED5);
  turnOn  (LED6);
  turnOn  (LED7);
  turnOff (DOT);
}
void kuusi(){
  turnOn  (LED1);
  turnOff (LED2);
  turnOn  (LED3);
  turnOn  (LED4);
  turnOn  (LED5);
  turnOn  (LED6);
  turnOn  (LED7);
  turnOff (DOT);
}
void seitseman(){
  turnOn  (LED1);
  turnOn  (LED2);
  turnOn  (LED3);
  turnOff (LED4);
  turnOff (LED5);
  turnOff (LED6);
  turnOff (LED7);
  turnOff (DOT);
}
void kahdeksan(){
  turnOn  (LED1);
  turnOn  (LED2);
  turnOn  (LED3);
  turnOn  (LED4);
  turnOn  (LED5);
  turnOn  (LED6);
  turnOn  (LED7);
  turnOff  (DOT);
}
void yhdeksan(){
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


