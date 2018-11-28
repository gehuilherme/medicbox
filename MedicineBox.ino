const int led1 = 3;
const int led2 = 4;
int buz = 2;
int cont = 1;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buz, OUTPUT);
}

void loop() {

  // Início da contagem 1° ciclo.
  
  delay(30000);
  goto ciclo1;


  
  ciclo1:{
    while(cont <= 5){
      digitalWrite(led1, HIGH);
      delay(100);    
      digitalWrite(led1,LOW);
      delay(100);
      tone(buz,1000,150);
      delay(1000);
      cont++;
    }
    
  cont = 1; // Reset do contador.

  }

  // Início da contagem 2° ciclo.

  delay(30000);
  goto ciclo2;
  
  ciclo2:{
    while(cont <= 5){
      digitalWrite(led2, HIGH);
      digitalWrite(led1, HIGH);
      delay(100);    
      digitalWrite(led2,LOW);
      digitalWrite(led1,LOW);
      delay(100);
      tone(buz,1000,150);
      delay(1000);
      cont++;
    }
  }

  cont = 1; // Reset do contador.


  // Início da contagem 3° ciclo.
  
  delay(30000);
  goto ciclo3;

  ciclo3:{
    while(cont <= 5){
      digitalWrite(led1, HIGH);
      delay(100);    
      digitalWrite(led1,LOW);
      delay(100);
      tone(buz,1000,150);
      delay(1000);
      cont++;
    }
    
  cont = 1; // Reset do contador.

  }
    
  
}
