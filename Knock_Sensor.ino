int led=9;
int snock=3;
int val;


void setup() 
{
pinMode(led,OUTPUT);
pinMode(snock,INPUT);
 

}

void loop()
{

val=digitalRead(snock);
if(val==HIGH)
{
  digitalWrite(led,LOW);
  
}
else
{
  digitalWrite(led,HIGH);
}

}
