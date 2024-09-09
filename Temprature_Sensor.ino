float temp;
int tempPin=A0;

void setup() {
pinMode(tempPin,INPUT);
Serial.begin(9600);

}

void loop() {
 temp=analogRead(tempPin);
 temp=temp*0.48828125;
 Serial.print("Temprature=");
 Serial.print(temp);
 Serial.print("*C");
 Serial.println( );
 delay(1000);
 

}
