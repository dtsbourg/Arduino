/***************************************************************************************
 *
 * Title:       Analog read IR
 * Description: Read the infra-red sensor from an analog input port.
 *
 ***************************************************************************************/
#include <prismino.h>

// the analog value is between 0 and 1023 so it needs a 16-bit variable
unsigned int ir_value;

void setup()
{
  // set pin output mode (sources current)
  pinMode(LED, OUTPUT);
}

void loop()
{
  // connect sensor to pin A1, A0 is used by the potentiometer on the shield
  ir_value = analogRead(A2);
  
  if(ir_value < 400)
  {
    // a low value means something (an obstacle) reflects emitted IR to the receiever
    digitalWrite(LED, HIGH);
     setSpeed(40, 38);
     delay(100);
  }
  
  else
  {
    // no obstable is detected, turn LED off
    digitalWrite(LED, LOW);
     setSpeed(-50, 38);
     delay(1000);
  }
  delay(100);
}

