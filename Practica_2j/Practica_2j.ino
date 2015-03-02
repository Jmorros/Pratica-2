/*************************************************************************  
**                                                                      **
**                      Matematiques amb arduino                        **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int gb = 100; 
long mb;      

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);     // Comunicació a 9600bps
  Serial.print("La teva tarjeta grafica te "); 
  Serial.print(gb);            
  Serial.println(" Gb de memoria");
  
  mb = gb;     //Fem que el mb sigui igual que el gb
  mb=mb*1024;  //d'aquesta manera ens ahorrem que la variable gb
              //Sigui del format long
  Serial.print("I pot emmagatzemar ");
  Serial.print(mb);
  Serial.println(" MB");
 
  
 
}


//*******  Loop  *********************************************************
void loop(){


}


