int blue=9;
int green=8;
void setup()
{
pinMode(blue,OUTPUT);
pinMode(green,OUTPUT);


}

void loop()
{
digitalWrite(blue,HIGH);
delay(2000);
digitalWrite(blue,LOW);
delay(2000);

digitalWrite(green,HIGH);
delay(2000);
digitalWrite(green,LOW);
delay(2000);

}
