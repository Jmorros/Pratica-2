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
  Serial.println("Taula ASCII ~ Mapa de caracters: "); 

  
  
}


//*******  Loop  *********************************************************
void loop(){
  Serial.print(" Numero base: ");
  Serial.println(num);  
  
  Serial.print("ASCII: ");
  Serial.write(num);
  Serial.println();
  
  Serial.print("Decimal: ");
  Serial.println(num, DEC);
  
  Serial.print("Hexadecimal: ");
  Serial.println(num, HEX);
  
  Serial.print("Octal: ");
  Serial.println(num, OCT);
  
  Serial.print("Binari: ");
  Serial.println(num, BIN);
  
  if (num==126)
   {
      while(true)
        {
        }
   }
   delay(500);
   
   num++;
}

