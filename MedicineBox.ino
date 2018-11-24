const int led1 = 3;
const int led2 = 4;
int buz = 2;
int cont = 1;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buz,OUTPUT);
}

void loop() {
  tone(buz,1000,100);
  delay(30000);
  goto med1;
  delay(10000);
  goto med2;
  
  
  med1:{
    while(cont <= 5){
      digitalWrite(led1, HIGH);
      delay(100);    
      digitalWrite(led1,LOW);
      delay(100);
      tone(buz,1000,150);
      delay(1000);
    }
    
  cont = 1;

  }
  
  med2:{
    while(cont <= 5){
      digitalWrite(led2, HIGH);
      delay(100);    
      digitalWrite(led2,LOW);
      delay(100);
      tone(buz,1000,150);
      delay(1000);
    }
  }
  
  cont = 1;
  
}