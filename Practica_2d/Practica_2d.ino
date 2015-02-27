/*************************************************************************  

En aquesta practica provem la funcio print

*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************


//*******  Setup  ********************************************************
void setup()
{
  Serial.begin(9600); //Refresh de comunicació entre l'arduino i l'ordinador
  Serial.println("");
  Serial.print("Escull el numero de l'operaci");
  Serial.write(243);
  Serial.println (" que vols realitzar?");
  Serial.println("  1.Comprovar numero de tarjeta de credit");
  Serial.println("  2.Comprovar numero de compte bancari");
  Serial.println("  3.Buscar un digit perdut de terjeta de credit");

Serial.write(243);
}


//*******  Loop  *********************************************************
void loop()
{

}
