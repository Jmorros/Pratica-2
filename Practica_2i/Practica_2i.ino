/*************************************************************************  
**                                                                      **
**                      Matematiques amb arduino                        **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
long gb = 100; //He tingut que difinir les dos variables com a long, ja que
long mb;      // si no, no funcionava correctament

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


