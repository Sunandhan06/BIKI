#include <Wire.h>
 #include <DS3231.h>
  #include <Adafruit_GFX.h>
   #include <Adafruit_SSD1306.h>

DS3231  rtc(SDA, SCL);

int button1 = 3;
 //int button2 = 4;

int hall_effect = 2;
 unsigned int rpm;
  volatile byte revolution;

unsigned long present = 0;
 unsigned long past = 0;
  unsigned long = time;

int w1 = 1;
 int w2 = 1;
  int w3 = 1;

void window1(int a) {

  int but_val1;

  while(a) {

    but_val1 = digitalRead(button1);

    if(but_val1 == 1) {




    }

    else {

      a = 0;

    }

  }

}

void clock(int b) {

  while(b) {
    
    int but_val2 = digitalRead(button1);

    if(but_val2 == 1) {

      // Send Day-of-Week = rtc.getDOWStr();
  
      // Send date = rtc.getDateStr();
 

      // Send time = rtc.getTimeStr();
  
      // Wait one second before repeating :)

      // delay (1000);

    }

    else {

      b = 0;

    }

  }

}

void ISR() {

  revolution++;

}

void rpm(int c) {

  while(c) {

    int but_val3 = digitalRead(button1);

    if(but_val3 == 1) {

      delay(1000);

      detachInterrupt(digitalPinToInterrupt(hall_effect));

      past = present;
       present = millis();
        time = (present-past)/1000;

      rpm = (revolution/time)*60;

      revolution = 0;

      attachInterrupt(digitalPinToInterrupt(hall_effect), ISR, RISING);

    }

    else {

      c = 0;

    }

  }

}

void setup() {

  rtc.begin();

  pinMode(button1, INPUT_PULLUP);
   //pinMode(button2, INPUT_PULLUP);

  pinMode(hall_effect, INPUT);

  attachInterrupt(digitalPinToInterrupt(hall_effect), ISR, RISING);

}

void loop() {

  past = present;
   present = millis();
    time = (present-past)/1000;

  window1(w1);
   clock(w2);
    rpm(w3);

  /* w1 = 1;
      w2 = 1;
       w3 = 1; */ 

  

}
