int sensor=8;
void setup() 
{

 pinMode(sensor,INPUT);
Serial.begin(9600);
}

void loop() {
  int x=digitalRead(sensor);
  digitalWrite(sensor,HIGH);
  Serial.println(x);
}
