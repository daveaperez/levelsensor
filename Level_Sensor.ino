#define LEVELSENSORPIN 10
unsigned long time;
int numDays;

void setup() {
  pinMode(LEVELSENSORPIN, INPUT);
  time = 0;
  numDays = 0;
}

void loop() {
  delay(1000);
  int value = digitalRead(LEVELSENSORPIN);
  if(value == HIGH) {
    if(time == 0) {
      //first notification
      time = millis();  
    }
    numDays = (time / 86400000) + 1;
    
    //send report indicating number of days.
    
    if(numDays == 30) {
      //send URGENT message
      
    }
    
  }
  if(value == LOW) {
    if(time > 0) {
      //clear alarm
      time = 0;
    }
    
  }
}
