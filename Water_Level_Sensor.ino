int level=8;

void setup() 
{
  Serial.begin(9600);
pinMode(level,OUTPUT);
  

}

void loop() 
{
 
 analogWrite(level,HIGH);

 
  

}
