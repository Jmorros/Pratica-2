/*************************************************************************  
**                                                                      **
**                        Formats d'esciptura                           **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int num = 64; 


//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);     // Comunicació a 9600bps
  Serial.print("Diferents formats per al numero: "); 
  Serial.println(num); 
  
  Serial.print("ASCII: ");
  Serial.write(num);
  Serial.println();
  
  Serial.print("Decimal:");
  Serial.println(num,DEC);  //El numero estara escrit amb decimal
  
  Serial.print("Binari:");
  Serial.println(num,BIN);  //El numero estara escrit amb binari
  
  Serial.print("Hexadecimal:");
  Serial.println(num,HEX);  //El numero estara escrit amb hexadecimal
  
  Serial.print("Octal:");
  Serial.println(num,OCT);  //El numero estara escti amb octal
  
}


//*******  Loop  *********************************************************
void loop(){


}


