


int touch=8;
int buzzer=9;

void setup() {
  Serial.begin(9600);
   pinMode(touch,INPUT);
   pinMode(buzzer,OUTPUT);


}

void loop()
{
  int x=digitalRead(touch);

  Serial.println(x);

  if (x==0)
  {

  digitalWrite(buzzer,LOW);
  }
  else 
 {
  
  Serial.println(" touch detected");
  digitalWrite(buzzer,HIGH);
   
 }

}
