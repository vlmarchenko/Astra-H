#include <HardwareCAN.h>
/*
   Uses STM32duino with Phono patch. Must add 33 and 95 CAN speeds
*/
// Choose output serial port
#define SERIAL Serial2
// Uncomment to enable 'debug()' messages output
#define DEBUG
// Uncomment to enable 'log()' messages output
#define LOG

#define PC13ON 0
#define PC13OFF 1
#define DELAY 200
/* global variables */
volatile bool flag_blocked;
// Instanciation of CAN interface
HardwareCAN canBus(CAN1_BASE);
CanMsg msg ;
CanMsg *r_msg;

void setup()
{
  Serial2.begin(115200); // output to A2 pin
  Serial2.println("Hello World!");
  Serial2.println("Starting \"1-button-compressor switch\" v11.4 2018-11-06");
  debug("checking debug level");
  log("checking log level");


  pinMode(PC13, OUTPUT); // LED
  digitalWrite(PC13, PC13ON);
  delay(50);// to see the LED
  Serial2.println("Initialize the CAN module ...");
  CANSetup() ;        // Initialize the CAN module and prepare the message structures.
  Serial2.println("Initialization OK");
  flag_blocked = false;
  log("flag_blocked is set to " + flag_blocked);
  wakeUpBus();
  wakeUpScreen();
  Serial2.println("end set up");
  digitalWrite(PC13, PC13OFF);
}

void loop()
{
  //  debug("loop");
  while ( ( r_msg = canBus.recv() ) != NULL )
  {
    ///// processing the incoming message
    if (r_msg->ID == 0x206) // steering wheel buttons
    {
      debug("steering wheel buttons");
      // setting the flag_blocked flag [01 нажата кнопка] [81 пресет/верхняя на руле] []
      if (r_msg->Data[1] == 0x81)
      {
        if (r_msg->Data[0] == 0x01)
        {
          flag_blocked = true;
          digitalWrite(PC13, PC13ON);
          Serial2.println("Blocking button is pressed");
        }
        else
        {
          flag_blocked = false;
          digitalWrite(PC13, PC13OFF);
          Serial2.println("Blocking button is released");
        }
      }
    }
    else if (r_msg->ID == 0x208) //climate controls
    {
      debug("climate controls");
      // check block button pressed
      if (flag_blocked)
      { // if block pressed, just skip it
        // do nothing
      }
      else
      {
        // check if the climate control menu is pressed
        if (
          (r_msg->Data[0] == 0x01) and
          (r_msg->Data[1] == 0x17) and
          (r_msg->Data[2] == 0x00) //?
        )
        { // AC triggering script
          Serial2.println("blocking is NOT pressed");
          Serial2.println("Running AC triggering script");
          AC_trigger();
          Serial2.println("Done.");
          digitalWrite(PC13, PC13OFF);
        }
        //end AC triggering script
      }
      // end if
    }
    canBus.free();

  }
  // close while
}
// close void loop
