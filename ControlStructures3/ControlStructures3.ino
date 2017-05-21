/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                   Control structures 2                      **
**                                                             **
**   NOM: Abel Picó                           Data:22/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************

int tempAigua = 101;

//*************************** SETUP *****************************

void setup() 
{
  Serial.begin(9600);     
  
  if ( tempAigua >= 100)
  {
    Serial.print("Aigua a ");
    Serial.print(tempAigua);
    Serial.println("C");
    Serial.print("Aigua supera els 100C, esta bullint!");
  }
  else if ( tempAigua < 100 and tempAigua > 90)
  {
    Serial.print("Aigua a ");
    Serial.print(tempAigua);
    Serial.println("C");
    Serial.print("Aigua a punt de bullir");
  }
  else
  {
    Serial.print("Aigua a ");
    Serial.print(tempAigua);
    Serial.println("C");
    Serial.print("Aigua encara no bull");
  }

}


//*************************** LOOP ******************************

void loop()
{


}


//************************ FUNCIONS *****************************
