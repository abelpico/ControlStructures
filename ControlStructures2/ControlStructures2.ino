/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                   Control structures 2                      **
**                                                             **
**   NOM: Abel Picó                           Data:22/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************

int tempAigua = 100;

//*************************** SETUP *****************************

void setup() 
{
  Serial.begin(9600);     
  
  if ( tempAigua >= 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  }
  if ( tempAigua < 100)
  {
    Serial.print("Aigua encara no bull");
  }

}


//*************************** LOOP ******************************

void loop()
{


}


//************************ FUNCIONS *****************************
