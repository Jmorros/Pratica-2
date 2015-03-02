/*************************************************************************  
**                                                                      **
**                      Matematiques amb arduino                        **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int a = 3; 
int b = 2;
float c;
float d;

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);     // Comunicació a 9600bps
  Serial.println("La divisio a/b es: "); 
  Serial.print("a = "); 
  Serial.println(a);
  
  Serial.print("b = ");
  Serial.println(b);
  
  Serial.print("El resultat es: ");

  c = a;
  d = b;
  c= c/d;
  Serial.println(c);
}


//*******  Loop  *********************************************************
void loop(){


}


