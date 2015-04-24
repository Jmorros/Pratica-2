/*************************************************************************  
**                                                                      **
**                            Estructura FOR                            **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int valor= 15;

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(57600);     // Comunicació a 57600bps
  Serial.println("Comptar des de 0 a 15. "); 
  
  for(int i = 0; i <= valor ; i++)
    {
    Serial.print(i);
      if( i < valor)
         {
          Serial.print("-");
         }
      else 
         {
          Serial.print("");
         } 
    }
}

//*******  Loop  *********************************************************
void loop(){

}

