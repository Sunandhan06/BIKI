#include <Wire.h>
 #include <DS3231.h>
  #include <Adafruit_GFX.h>
   #include <Adafruit_SSD1306.h>

DS3231  rtc(SDA, SCL);

int hall_effect = 2;
 unsigned int rpm;
  volatile byte revolution;

unsigned long present = 0;
 unsigned long = past = 0;
  unsigned long = time;

void ISR() {

  revolution++;

}

void rpm() {

  delay(1000);

  detachInterrupt(digitalPinToInterrupt(hall_effect));

  past = present;
   present = millis();
    time = (present-past)/1000;

  rpm = (revolution/time)*60;

  revolution = 0;

  attachInterrupt(digitalPinToInterrupt(hall_effect), ISR, RISING);

}

void clock() {

  // Send Day-of-Week = rtc.getDOWStr();
  
  // Send date = rtc.getDateStr();
 

  // Send time = rtc.getTimeStr();
  
  // Wait one second before repeating :)

 // delay (1000);

}

void setup() {

  rtc.begin();

  pinMode(hall_effect, INPUT);

  attachInterrupt(digitalPinToInterrupt(hall_effect), ISR, RISING);

}

void loop() {

  past = present;
   present = millis();
    time = (present-past)/1000;

}
