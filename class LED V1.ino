class Led{
private:
int _pin;

public:
Led(){}; //constructor
Led(int pin){
_pin=pin;//constructor that is actually used
} 

void init(){
pinMode(_pin, OUTPUT); //pinmode to output
}
 void on(){
 digitalWrite(_pin,1); //turn on
 }

 void off(){
 digitalWrite(_pin,0); //turn off
 }
};
////////////////////************************class finished************************//////////////

Led Red (13);


void setup() {
Red.init();// put your setup code here, to run once:

}

void loop() {
 Red.on(); // put your main code here, to run repeatedly:
delay(1000);
}
