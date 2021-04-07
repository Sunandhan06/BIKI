int button1 = 3;

int w4 = 1;

void timer(int d) {

  while(d) {

    //starting display "timer"

    delay(5000);

    but_val4 = digitalRead(button1);

    if(but_val4 == 0) {

      // 10 sec display

      delay(2000)

      but_val5 = digitalRead(button1); 

      if(but_val5 == 0) {

        // 30 sec display

        delay(2000) 

        but_val6 = digitalRead(button1);

        if(but_val6 = 0) {


          // 60 sec display

          delay(2000) 

          but_val7 = digitalRead(button1);

          if(but_val7 == 0) {

            d = 0;

          }

          else {

            // 60 sec starts
            
          }

        }

        else {

          // 30 sec starts

        }
      }

      else {

        // 10 sec starts

      }
    }

    else {

      d = 0;

    }

  }


}

void setup() {

  pinMode(button1, INPUT_PULLUP);
  
}

void loop() {

  timer(w4);
  
}
