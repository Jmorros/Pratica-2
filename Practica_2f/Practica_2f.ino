/*************************************************************************  
**                                                                      **
**                      Matematiques amb arduino                        **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int cat1 = 3;
int cat2 = 4;
int hipo;

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);     // Comunicació a 9600bps
  Serial.println("Hipotenusa dels catets: "); 
  Serial.println("");            
  Serial.print("catet 1 = ");
  Serial.println(cat1);
  Serial.print("catet 2 = ");
  Serial.println(cat2);
  Serial.println("");
  
  Serial.println("La hipotenusa es:");
  Serial.print("Hipotenusa = ");
  hipo = sqrt(cat1*cat1+cat2*cat2);  //Faig la operació matematica de l'arrel quadrada de
  Serial.println(hipo);              //la suma del quadrat dels catets
  
 
}


//*******  Loop  *********************************************************
void loop(){


}

