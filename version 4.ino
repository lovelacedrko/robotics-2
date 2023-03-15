//The goal of this program is to  display digits on a 7-segment display  using the functions

 int A = 8;
 int B = 7;
 int C = 6;
 int D = 5;
 int E = 4;
 int F = 3;
 int G = 2;
 int H = 1;

int time = 1000;//defining variable to easily control delay time

int pins[] ={8,7,6,5,4,3,2};//Array for pins corresponding to the pins a-g on the 7segment

//Arrays of 7 that contains the LEDs that must be turn on or off in order to display the number
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
//using for loop t define pins as output
  for( int i=2; i<9; i++){
    pinMode(i, OUTPUT);
  }
}


//these are the functions for each digits to be displayed
void One() { 
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], one[j]);//ONE
}
}

void Two(){
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], two[j]);//TWO
}
}

void Three(){
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], three[j]);//THREE
}
}

void Four(){
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], four[j]);//FOUR
}
}

void Five(){
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], five[j]);//FIVE
}
}

void Six(){
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], six[j]);//SIX
}
}

void Seven(){
delay(time);for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], seven[j]);//SEVEN
}
}

void Eight(){
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], eight[j]);//EIGHT
}
}

void Nine(){
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], nine[j]);//NINE
}
}

void Zero(){
for( int j = 0; j<7 ; j++) {
  digitalWrite(pins[j], zero[j]);//ZERO
}
}

 void loop(){
  //display numbers 0-9 by calling out their functions with a 1s delay between number displayed
One();
delay(time);
Two();
delay(time);
Three();
delay(time);
Four();
delay(time);
Five();
delay(time);
Six();
delay(time);
Seven();
delay(time);
Eight();
delay(time);
Nine();
delay(time);


}
