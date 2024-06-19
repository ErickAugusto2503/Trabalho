int nota1 = 2;
int nota2 = 3;
int nota3 = 4;
int nota4 = 5;
int nota5 = 6;
int nota6 = 7;
int nota7 = 8;
int nota8 = 9;

int buzzer = 10;

void setup()
{
 pinMode(nota1, INPUT);
 pinMode(nota2, INPUT);
 pinMode(nota3, INPUT);
 pinMode(nota4, INPUT);
 pinMode(nota5, INPUT);
 pinMode(nota6, INPUT);
 pinMode(nota7, INPUT);
 pinMode(nota8, INPUT);
 
 pinMode(buzzer, OUTPUT);
}

void loop()
{
 int v1 = digitalRead(nota1);
 int v2 = digitalRead(nota2);
 int v3 = digitalRead(nota3);
 int v4 = digitalRead(nota4);
 int v5 = digitalRead(nota5);
 int v6 = digitalRead(nota6);
 int v7 = digitalRead(nota7);
 int v8 = digitalRead(nota8);
  
  if(v1 == 1){
    tone(buzzer, 261, 100);
  }
  if(v2 == 1){
    tone(buzzer, 293, 100);
  }
  if(v3 == 1){
    tone(buzzer, 329, 100);
  }
  if(v4 == 1){
    tone(buzzer, 349, 100);
  }
  if(v5 == 1){
    tone(buzzer, 392, 100);
  }
  if(v6 == 1){
    tone(buzzer, 440, 100);
  }
  if(v7 == 1){
    tone(buzzer, 495, 100);
  }
  if(v8 == 1){
    tone(buzzer, 528, 100);
  }
  delay(10);
}