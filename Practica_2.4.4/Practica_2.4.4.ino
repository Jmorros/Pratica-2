/*************************************************************************  
**                                                                      **
**                        Estructura IF, ELSE..                         **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
float Qualificacio_energetica; 

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(57600);     // Comunicació a 57600bps
}

//*******  Loop  *********************************************************
void loop(){
  while (Serial.available() > 0 ) { //Amb aquest apartat estem dient que si escribim un nombre
   Qualificacio_energetica = Serial.parseFloat();  //mes gran que 0, el codi s'executara, amb el 
                                     //Serial.parseInt(), estem llegin el nombre que li escribim
  Serial.print("La qualificacio energetica actual es: "); 
  Serial.println(Qualificacio_energetica);
  
  if ( Qualificacio_energetica < 3.5)   //Si la QE és <3.5
    {
      Serial.println("Qualificacio energetica nivell A.");
    } 
    
  else if( Qualificacio_energetica < 6.5 ) //Si la QE és <6.5
    {                                              
      Serial.println("Qualificacio energetica nivell B");
    }  
    
  else if (Qualificacio_energetica < 11.1 )//Si la QE és < 11.1
    {                       
      Serial.println("Qualificacio energetica nivell C");
    }
    
  else if (Qualificacio_energetica < 17.7 )//Si la QE és < 17.7 
    {                                              
      Serial.println("Qualificacio energetica nivell D!");
    }  
  else if (Qualificacio_energetica < 38.2 )//Si la QE és < 38.2 
    {                                              
      Serial.println("Qualificacio energetica nivell E!");
    }  
  else if (Qualificacio_energetica < 43.2 )//Si la QE és < 43.2 
    {                                              
      Serial.println("Qualificacio energetica nivell F!");
    }  
  else if (Qualificacio_energetica >= 43.2 )//Si la QE és >= 43.2 
    {                                              
      Serial.println("Qualificacio energetica nivell D!");
    }  
  else 
    {                                              
      Serial.println("Error1");
    }  
     
  }
}

