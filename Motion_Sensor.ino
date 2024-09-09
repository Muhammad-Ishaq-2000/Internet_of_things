int led=8;
int sensor=9;
void setup()
{
  Serial.begin(9600);
pinMode(sensor,INPUT);
pinMode(led,OUTPUT);

}

void loop() 
{
  int x=digitalRead(sensor);

Serial.println(x);

 if (x==1)
 {
  digitalWrite(sensor,HIGH);
digitalWrite(led,HIGH);
Serial.println("Motion is Detected");
delay(2000);
 }
 else
 {
  digitalWrite(sensor,LOW);
digitalWrite(led,LOW);
Serial.println("Motion is Not Detected");
 }

}
