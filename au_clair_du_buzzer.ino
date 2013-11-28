/***************************************************************************************
 *
 * Title:       Program 1
 * Description: 
 *
 ***************************************************************************************/
 
#include <prismino.h>
 
#define Do 261
#define Do_Di 277
#define Re 294
#define Re_Di 311
#define Mi 329
#define Fa 349
#define Fa_Di 370
#define Sol 392
#define Sol_Di 415
#define La 440
#define La_Di 466
#define Si 493
#define DO 523

//int frequency[]={Fa,Sol,La,Fa,Fa,Sol,La,Fa,La,La_Di,Do,La,La_Di,Do,Do,Re,Do,La_Di,La,Fa,Do,Re,Do,La_Di,La,Fa,Fa,Do,Fa,Fa,Do,Fa};
int frequency[]={Do,Do,Do,Re,Mi,Re,Do,Mi,Re,Re,Do};
void setup()
{

}

void loop()
{
  setSpeed(60, 80);
  delay(1000);
  // play a frequency from 10kHz to 400Hz with steps of 5Hz
  for(int i=0; i < 11; i++)
  {
    // set the frequency and the playing time in milliseconds
    play(frequency[i], 500);
    delay(100);
  }
  
}
