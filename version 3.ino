 int A = 8;
 int B = 7;
 int C = 6;
 int D = 5;
 int E = 4;
 int F = 3;
 int G = 2;
 int H = 1;

int time = 1000;
int pins[] ={8,7,6,5,4,3,2};
int one[] = {0,1,1,0,0,0,0};
int two[] = {1,1,0,1,1,0,1};
int three[] = {1,1,1,1,0,0,1};
int four[] = {0,1,1,0,0,1,1};
int five[] = {1,0,1,1,0,1,1,};
int six[] = {1,0,1,1,1,1,1};
int seven[] = {1,1,1,0,0,0,0};
int eight[] = {1,1,1,1,1,1,1};
int nine[]= {1,1,1,0,0,1,1};
int zero[]= {1,1,1,0,0,1,1};

void setup()
{

  for( int i=2; i<9; i++){
    pinMode(i, OUTPUT);
  }
}



void loop() { 
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], one[j]);
}
delay(time);
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], two[j]);
}
delay(time);
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], three[j]);
}
delay(time);
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], four[j]);
}
delay(time);
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], five[j]);
}
delay(time);
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], six[j]);
}
delay(time);for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], seven[j]);
}
delay(time);
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], eight[j]);
}
delay(time);
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], nine[j]);
}
delay(time);
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], zero[j]);
}
delay(time);



}
