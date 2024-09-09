int xaxis=8;
int yaxis=9;

void setup() {
Serial.begin(9600);
pinMode(xaxis,OUTPUT);
pinMode(yaxis,OUTPUT);


}

void loop() {
int X=analogRead(xaxis);
int Y=analogRead(yaxis);
analogWrite(xaxis,HIGH);
analogWrite(yaxis,HIGH);
Serial.println(Y);
delay(1000);



}
