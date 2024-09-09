


int fire=9;
int buzzer=8;

void setup() {
  Serial.begin(9600);
   pinMode(fire,INPUT);
   pinMode(buzzer,OUTPUT);


}

void loop()
{
  int x=digitalRead(fire);

  Serial.println(x);

  if (x==0)
  {
  Serial.println("Fire not detected");
  digitalWrite(buzzer,LOW);
  }
  else 
 {
  
  Serial.println(" Fire detected");
  digitalWrite(buzzer,HIGH);
   
 }

}
