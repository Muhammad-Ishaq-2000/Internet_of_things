int sensor=8;
int led=9;
void setup() {
 Serial.begin(9600);
 pinMode(sensor,INPUT);
 pinMode(led,OUTPUT);
 

}

void loop() {
 int x=digitalRead(sensor);
 digitalWrite(sensor,HIGH);
  Serial.println(x);
 if(x==1)
 {
 
 digitalWrite(led,HIGH);
 delay(100);

 }
 else
 {
  digitalWrite(led,LOW);
 }
}
