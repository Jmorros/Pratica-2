/*************************************************************************  
**                                                                      **
**                        Estructura IF, ELSE..                         **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int Temperatura; 

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(57600);     // Comunicació a 9600bps
}

//*******  Loop  *********************************************************
void loop(){
  while (Serial.available() > 0 ) { //Amb aquest apartat estem dient que si escribim un nombre
   Temperatura = Serial.parseInt();  //mes gran que 0, el codi s'executara, amb el 
                                     //Serial.parseInt(), estem llegin el nombre que li escribim
  Serial.print("La temperatura actual de la aigua es: "); 
  Serial.println(Temperatura);
  
  if ( Temperatura > 100)   //Aqui estem fent una comparació ja que si la temperatura supera els
    {                       //100º ens escriura lo de sota.
      Serial.println("La aigua supera els 100 C, esta bullint!");
    }   
  }
}

