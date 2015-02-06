/*************************************************************************  

En aquesta practica provem la funcio print

*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************


//*******  Setup  ********************************************************
void setup()
{
Serial.begin(9600); //Refresh de comunicació entre l'arduino i l'ordinador

}


//*******  Loop  *********************************************************
void loop()
{
Serial.print("Hello World!!");  //L'arduino ens dirà el que hem ficat dintre del 
                                //parentesis sense espais i a la mateixa linia,
                                //amb una repetició cada 1s
delay(1000);
}
