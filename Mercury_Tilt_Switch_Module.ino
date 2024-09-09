int led=8;
int switch_pin=9;
int val;
void setup() {
 pinMode(led,OUTPUT);
 pinMode(switch_pin,INPUT);
 }
void loop() {
 val=digitalRead(switch_pin);
 if(val==HIGH)
 {
  digitalWrite(led,HIGH);
 }
else
{
  digitalWrite(led,LOW);
}
}
