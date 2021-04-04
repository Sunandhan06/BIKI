#include <DS3231.h>

// Init the DS3231 using the hardware interface
DS3231  rtc(SDA, SCL);

void setup()
{
  
  // Initialize the rtc object
  rtc.begin();
  
  // The following lines can be uncommented to set the date and time
  //rtc.setDOW(WEDNESDAY);     // Set Day-of-Week to SUNDAY
  //rtc.setTime(12, 0, 0);     // Set the time to 12:00:00 (24hr format)
  //rtc.setDate(1, 1, 2014);   // Set the date to January 1st, 2014
}

void loop()
{
  // Send Day-of-Week = rtc.getDOWStr();
  
  
  
  // Send date = rtc.getDateStr();
 

  // Send time = rtc.getTimeStr();
  
  // Wait one second before repeating :)
 // delay (1000);
}



