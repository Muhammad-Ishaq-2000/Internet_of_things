int led=8;
int ldr=A0;
int value=0;

void setup() {
pinMode(8,OUTPUT);
pinMode(9,INPUT);
Serial.begin(9600);


}

void loop() {
  int x=analogRead(value);
  Serial.println(x);
delay(1000);
 /* digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(1000);*/
  if(x>0)
  {
    digitalWrite(8,HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(8,LOW);
    delay(1000);
  }

}
