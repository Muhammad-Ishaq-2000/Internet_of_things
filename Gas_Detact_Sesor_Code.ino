//Use the gas detect Sensor MQ_2 to dected gas Lekage.Use with three pin. Pin_1 use with VCC(Current) pin_2 GND(Ground) pin_3 use with DO(Digital Value 0-1)

int white=8;

void setup() {
  Serial.begin(9600);
   pinMode(white,INPUT);


}

void loop()
{
  int x=digitalRead(white);

  Serial.println(x);

  if (x==0)
  {
  Serial.println("Gas not detected");
  }
  else 
 {
  
  Serial.println("  Gas  detected");
   
 }

}
