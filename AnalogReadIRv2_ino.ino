/***************************************************************************************
 *
 * Title:       Analog read IR v2
 * Description: Read the infra-red sensor from an analog input port. A1 is defined for
 * left-hand sensor. A2 is defined for right-hand sensor.
 * Sensors have been calibrated to detect black @ intensity > 600 ~> 400 as safety factor.
 * 
 *
 ***************************************************************************************/


// the analog value is between 0 and 1023 so it needs a 16-bit variable
unsigned int ir_value_right;
unsigned int ir_value_left;

void setup()
{
  // set pin output mode (sources current)
  //pinMode(LED, OUTPUT); Uncomment for LED obstacle notification
}

void loop()
{
  // connect sensor to pin A1, A0 is used by the potentiometer on the shield
  ir_value_right = analogRead(A2);
  ir_value_left = analogRead(A1);
  
  
  if(ir_value_right < 400 && ir_value_left < 400)
  {
     setSpeed(40, 38);
     delay(100);
  }
  
  else if (ir_value_left > 400)
  {
    setSpeed(38,-50);
    delay(1000);
  }
  
  else if (ir_value_right > 400)
  {
    // no obstable is detected, turn LED off
     setSpeed(-50, 38);
     delay(1000);
  }
  
  delay(100);
}

