/*************************************************************************  
**                                                                      **
**                      Matematiques amb arduino                        **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int gb = 100; 
long mb;
long kb;
long rmb;
long rkb;

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);     // Comunicació a 9600bps
  Serial.print("El disc dur te una capacitat de: "); 
  Serial.print(gb); 
  Serial.println(" GB.");
  
  mb= gb;
  mb= mb *1024;
  kb= mb*1024;
  Serial.print("Amb teoria, podem emmagatzemar ");
  Serial.print(mb);
  Serial.print(" Megabytes i ");
  Serial.print(kb);
  Serial.println(" Kilobytes.");
  
  rmb=gb;
  rmb= rmb*1000;
  rkb= rmb*1000;
  Serial.print("Pero a la realitat nomes emmatazemem ");
  Serial.print(rmb);
  Serial.print(" Megabytes i ");
  Serial.print(rkb);
  Serial.println(" Kilobytes.");
  
  Serial.print("Estem perdent ");
  Serial.print(kb-rkb);
  Serial.println(" Kilobytes!");
}


//*******  Loop  *********************************************************
void loop(){


}


