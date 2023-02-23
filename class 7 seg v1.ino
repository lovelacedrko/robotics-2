class seg{
 private:
 int _pin;


public: 
seg(){}; // constructor
seg(int pin){ //Constructor ill really use
_pin=pin;
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
//*****************************class finished**************************************************
int time=1000;

seg a (2);
seg b (3);
seg c (4);
seg d (5);
seg e (6);
seg f (7);
seg g (8);
seg h (9);
// create objects

void one(){
b.on();
c.on();
a.off();
g.off();
e.off();
d.off();
f.off();
}
void two(){
a.on();
b.on();
g.on();
e.on();
d.on();
c.off();
f.off();
}
void three(){
a.on();
b.on();
c.on();
d.on();
e.off();
f.off();
g.on();
}
void four(){
f.on();
g.on();
b.on();
c.on();
a.off();
d.off();
e.off();
}
void five(){
a.on();
b.off();
e.off();
f.on();
g.on();
c.on();
d.on();
}
void six(){
a.on();
b.on();
f.on();
e.on();
d.on();
c.on();
g.on();
}
void seven(){
a.on();  
b.on();
c.on();
d.off();
e.off();
f.off();
g.off();
}
void eight(){
a.on();
b.on();
c.on();
d.on();
e.on();
f.on();
g.on();
}
void nine(){
a.on();
b.on();
c.on();
d.off();
e.off();
f.on();
g.on();
}
void zero(){
a.on();
b.on();
c.on();
d.on();
e.on();
f.on();
g.off();
}
void off(){
a.off();
b.off();
c.off();
d.off();
e.off();
f.off();
g.off();
}  
void setup() {
 a.init();
 b.init();
 c.init();
 d.init();
 d.init();
 e.init();
 f.init();
 g.init();
 h.init();
  
}

void loop() {
 
one();
 delay(time);
 two();
 delay(time);
  three();
 delay(time);
  four();
 delay(time);
  five();
 delay(time);
  six();
 delay(time);
  seven();
 delay(time);
  eight();
 delay(time);
  nine();
 delay(time);
 zero();
 delay(time);

}
