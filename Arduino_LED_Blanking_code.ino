
 int white=8;
void setup() 
{
Serial.begin(9600);


 pinMode(white,OUTPUT);
 

}

void loop() {



 digitalWrite(white,HIGH);
 delay(1000);
 Serial.println(" led on ");
 digitalWrite(white,LOW);
 Serial.println("led off");
 delay(1000);


}
