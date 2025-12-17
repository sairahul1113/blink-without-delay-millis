#define led_pin 2

unsigned long lastTime = 0;
const unsigned long Interval = 1000; //one sec 

void setup () {
  pinMode(led_pin,OUTPUT);
}
void loop () {
  unsigned long currentTime = millis();
  if (currentTime-lastTime>= Interval){
    lastTime= currentTime;
    digitalWrite(led_pin, !digitalRead(led_pin));
  }
}
