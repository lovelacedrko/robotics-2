//The goal of this program is to  display digits on a 7-segment display using switch case


int time=1000;  //define variable to easily control time delay

//Array for pins corresponding to the pins a-g on the 7segments
int pins[]={4,5,6,7,8,9,10};

//Arrays of 7 that contaning  the LEDs
int zero[]={1,1,1,1,1,1,0};
int one[]={0,1,1,0,0,0,0};
int two[]={1,1,0,1,1,0,1};
int three[]={1,1,1,1,0,0,1};
int four[]={0,1,1,0,0,1,1};
int five[]={1,0,1,1,0,1,1};
int six[]={1,0,1,1,1,1,1};
int seven[]={1,1,1,0,0,0,0};
int eight[]={1,1,1,1,1,1,1};
int nine[]={1,1,1,0,0,1,1};



//Variable used to change the case through a for loop
int var;

void setup() {
   // using for loop to define pins as outputs
  for(int i=4;i<11;i++){
  pinMode(i,OUTPUT);
  }

  
}

//Function for each digit
void Zero(){
for (int a=0;a<8;a++){ 
  digitalWrite(pins[a],zero[a]); //zero
}
}  

void One(){
for (int a=0;a<8;a++){ 
  digitalWrite(pins[a],one[a]); //ONE
}
}

void Two(){
for (int a=0;a<8;a++){
  digitalWrite(pins[a],two[a]); //TWO
}
}

void Three(){
for (int a=0;a<8;a++){
  digitalWrite(pins[a],three[a]); //THREE
}
}

void Four(){
for (int a=0;a<8;a++){
  digitalWrite(pins[a],four[a]); //FOUR
}
}

void Five(){
for (int a=0;a<8;a++){
  digitalWrite(pins[a],five[a]); //FIVE
}
}

void Six(){
for (int a=0;a<8;a++){
  digitalWrite(pins[a],six[a]); //SIX
}
}

void Seven(){
for (int a=0;a<8;a++){
  digitalWrite(pins[a],seven[a]); //SEVEN
}
}

void Eight(){
for (int a=0;a<8;a++){
  digitalWrite(pins[a],eight[a]); //EIGHT
}
}

void Nine(){
for (int a=0;a<8;a++){
  digitalWrite(pins[a],nine[a]); //NINE
}
}


void loop() {

//For loop that allows to change the case after the previous one has been completed
for(var=0;var<10;var++){ //since it is for each digit it starts at 0 and continuos to 9 
  
switch(var){
  case 0: //for each case it calls its respective function that will display the number
    Zero(); //For example, case 0 will use function Zero to display 0 on the 7-segment
    
    break; //break the case and continue 
    
    //the same thing hapopens with the case of each digit
    case 1:
      One();
      
      break;
    case 2:
      Two();
     
      break;  
    case 3:
      Three();
     
      break;
    case 4:
      Four();
     
      break;   
    case 5:
      Five();
      
      break; 
    case 6:
      Six();
      
      break; 
    case 7:
      Seven();
   
      break; 
    case 8:
      Eight();
      
      break; 
    case 9:
      Nine();
      
      break; 
    default: //default case
      break;          
}
delay(time); //after each case there's a delay of 1 second 
// the loop starts again at the end
}










}
