/*************************************************************************  
**                                                                      **
**                        Estructura IF, ELSE..                         **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int dia_semana; 

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(57600);     // Comunicació a 57600bps
}

//*******  Loop  *********************************************************
void loop(){
  while (Serial.available() > 0 ) { //Amb aquest apartat estem dient que si escribim un nombre
   dia_semana = Serial.parseInt();  //mes gran que 0, el codi s'executara, amb el 
                                     //Serial.parseInt(), estem llegin el nombre que li escribim
  Serial.println("Tenint amb compte que 1= dilluns i 7=diumenge escriu el numero. "); 
  Serial.print("El numero es: ");
  Serial.println(dia_semana);
  
  switch (dia_semana)
  {
    
    case 1:
      Serial.println ("Dilluns");
      break;
    case 2:
      Serial.println("Dimarts");
      break;
    case 3:
      Serial.println("Dimecres");
      break;
    case 4:
      Serial.println("Dijous");
      break;
    case 5:
      Serial.println("Divendres");
      break;
    case 6:
      Serial.println("Dissabte");
      break;
    case 7:
      Serial.println("Diumenge");
      break;
    default:
      Serial.println("Nombre no correcte");
      
    }    
  }
}

