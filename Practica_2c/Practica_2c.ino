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
Serial.println("Hello World!!");  //L'arduino ens dirà el que hem ficat dintre del 
                                //parentesis amb una repetició cada 1s
delay(1000);
}
