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
  Serial.begin(57600);     // Comunicació a 57600bps
}

//*******  Loop  *********************************************************
void loop(){
  while (Serial.available() > 0 ) { //Amb aquest apartat estem dient que si escribim un nombre
   Temperatura = Serial.parseInt();  //mes gran que 0, el codi s'executara, amb el 
                                     //Serial.parseInt(), estem llegin el nombre que li escribim
  Serial.print("La temperatura actual de la aigua es: "); 
  Serial.println(Temperatura);
  
  if ( Temperatura < 90)   //Aqui estem fent una comparació ja que si la temperatura  no supera els
    {                       //100º ens escriura lo de sota.
      Serial.println("La aigua esta per sota dels 90 C, Encara no esta bullint!");
    } 
    
  else if( Temperatura >= 90 && Temperatura <100 ) //aqui comprovara si la temperatura esta entre els 
    {                                              //90 i 100ºC 
      Serial.println("La aigua esta a punt de bullir!");
    }  
    
  else if (Temperatura == 100 )                    //Aqui comprova si la temperatura es 100ºC
    {                       
      Serial.println("La aigua esta a 100 C!");
    }
    
   else                                            //Si cap de les condicions anteriors es compleix 
    {                                              //aquesta s'executara
      Serial.println("La aigua esta bullint!");
    }  
 
  }
}

