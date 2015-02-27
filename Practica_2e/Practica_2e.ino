/*************************************************************************  
**                                                                      **
**                      Matematiques amb arduino                        **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int num1 = 5;
int num2 = 10;
int num3 = 20;

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);     // Comunicació a 9600bps
  Serial.println("Aqui unes quantes matematiques: "); 
  Serial.println("");            
  Serial.print("a = ");
  Serial.println(num1);

  Serial.print("b = ");
  Serial.println(num2);
  
  Serial.print("c = ");
  Serial.println(num3);
  Serial.println(""); 

  Serial.print("a + b = ");       // Suma
  Serial.println(num1 + num2);
  
  Serial.print("a * c = ");       // Multiplicació
  Serial.println(num1 * num3);
  
  Serial.print("c / b = ");       // Divisió
  Serial.println(num3 / num2);

  Serial.print("c % b = ");       // Modul
  Serial.println(num3 % num2);
  
  Serial.print("b - c = ");       // Resta
  Serial.println(num2 - num3);

}


//*******  Loop  *********************************************************
void loop(){


}

