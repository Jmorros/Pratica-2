/*************************************************************************  
**                                                                      **
**                      Matematiques amb arduino                        **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int gb = 100;
int mb;

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);     // Comunicació a 9600bps
  Serial.print("La teva tarjeta grafica te "); 
  Serial.print(gb);            
  Serial.println(" Gb de memoria");
  
  mb = gb*1024;
  Serial.print("I pot emmagatzemar ");
  Serial.print(mb);
  Serial.println(" MB");
  
 
}


//*******  Loop  *********************************************************
void loop(){


}


