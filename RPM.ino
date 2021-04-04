int hall_effect = 2;
 unsigned int rpm;
  volatile byte revolution;

unsigned long present = 0;
 unsigned long = past = 0;
  unsigned long = time;

void ISR() {

	revolution++;

}


void setup() {

	pinMode(hall_effect, INPUT);

	attachInterrupt(digitalPinToInterrupt(hall_effect), ISR, RISING);

}

void loop() {

	delay(1000);

	detachInterrupt(digitalPinToInterrupt(hall_effect));

	past = present;
	 present = millis();
	  time = (present-past)/1000;

	rpm = (revolution/time)*60;

	revolution = 0;

	attachInterrupt(digitalPinToInterrupt(hall_effect), ISR, RISING);

}
