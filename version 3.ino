 //The purpose of this program is to display digits on a 7-segment display in the simplest way using the for loop and arrays
 int B = 7;
 int C = 6;
 int D = 5;
 int E = 4;
 int F = 3;
 int G = 2;
 int H = 1;

int time = 1000;// define a variable to easily control delays

int pins[] ={8,7,6,5,4,3,2};//Array for the pins corresponding to the pins a-g on the 7 segment
//Arrays of 7 that enabling the led's to tur on and off 
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
//using for loop to define pins as output
  for( int i=2; i<9; i++){
    pinMode(i, OUTPUT);
  }
}



void loop() { 
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], one[j]);// array displays 1
}
delay(time);//delay for 1s
 
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], two[j]);// array displays 2
}
delay(time);//delay for 1s
 
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], three[j]);// array displays 3
}
delay(time);//delay for 1s
 
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], four[j]);// array displays 4
}
delay(time);//delay for 1s
 
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], five[j]);// array displays 5
}
delay(time);//delay for 1s
 
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], six[j]);// array displays 6
}
delay(time);//delay for 1s
 
 for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], seven[j]);// array displays 7
}
delay(time);//delay for 1s
 
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], eight[j]);// array displays 8
}
delay(time);//delay for 1s
 
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], nine[j]);// array displays 9
}
delay(time);//delay for 1s
 
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], zero[j]);// array displays 0
}
delay(time);//delay for 1s



}
