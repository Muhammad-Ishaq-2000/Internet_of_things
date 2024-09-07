// ldr pins used
int ldr1 = A4;
int ldr2 = A1;
int ldr3 = A2;
int ldr4 = A3;

// intensity of light on ldr limit
// For sun ldr intensity 790
//For Tubelight ldr intensity 250
// For Mobile Flash ldr intensity 450
long dg = 450;
// pin used for stepper to control
int a = 8, b = 9 , c = 10, d = 11;
int e = 4, f = 5, g = 6, h = 7;
void setup()
{
  Serial.begin(9600);

  // ldr light direction pins defined
  pinMode(A4, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);

  // pinmode set for horizontal stepper
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);

  //pinmode set for vertical stepper
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);

  // Horizontal stepper motor initial pin set to low
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);

  // Vertical stepper motor initial pin set to low
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);
}
Void loop ()
{
  // ldr data receiving variables
   int lu = 0, ld = 0, ru = 0, rd = 0;
   lu = analogRead(ldr1);
   ld = analogRead(ldr2);
   ru = analogRead(ldr4);
   rd = analogRead(ldr3);
  // Print LDR Value
   Serial.print("LDR1 Value =");
   Serial.println(lu);
   Serial.print("LDR2 Value =");
   Serial.println(ld);
   Serial.print("LDR3 Value =");
   Serial.println(rd);
   Serial.print("LDR4 Value =");
   Serial.println(ru);
  if (lu > dg && ld > dg && ru > dg && rd > dg) {
    Serial.println("Zero Degree");
  }
  else if (lu > dg && ld > dg && ru < dg && rd < dg ) {
    Serial.println("Rotate Right");
    clockRotate();
  }
  else if (lu < dg && ld < dg && ru > dg && rd > dg ) {
   Serial.println("Rotate Left");
   anticlockRotate();
  }
  else if (lu > dg && ld < dg && ru < dg && rd < dg)
  {
    Serial.println("Light is LDR 1");
    Rotateup();
  }
  else if (lu < dg && ld > dg && ru < dg && rd < dg)
  {
    Serial.println("Light is LDR 2");
    Rotatedown();
  }
  else if (lu < dg && ld < dg && rd > dg && ru < dg)
  {
    Serial.println("Light is LDR 3");
   Rotatedown();
  }
  else if (lu < dg && ld < dg && rd < dg && ru > dg)
  {
    Serial.println("Light is LDR 4");
   
      Rotateup();
  }
  else if (lu > dg && ru > dg && ld < dg && rd < dg)
  {
    Serial.println("UP Side LDR Active");
   Rotateup();
  }
  else if (ld > dg && rd > dg && lu < dg && ru < dg)
  Serial.println("Down Side LDR Active");
Rotatedown();
}
else 
{
Serial.println("No Light");
 }
  delay(10);
}
// functions for stepper to rotate left and right
void clockRotate() 
{
  digitalWrite(a, HIGH);
  digitalWrite(d, LOW);
  delay(5);
  digitalWrite(b, HIGH);
  digitalWrite(a, LOW);
  delay(5);
  digitalWrite(c, HIGH);
  digitalWrite(b, LOW);
  delay(5);
  digitalWrite(d, HIGH);
  digitalWrite(c, LOW);
  delay(5);
}
void anticlockRotate() 
{
  digitalWrite(d, HIGH);
  digitalWrite(a, LOW);
  delay(5);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  delay(5);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  delay(5);
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  delay(5);
}
// functions for stepper to rotate up and down
void Rotateup() {
  digitalWrite(e, HIGH);
  digitalWrite(h, LOW);
  delay(5);
  digitalWrite(f, HIGH);
  digitalWrite(e, LOW);
  delay(5);
  digitalWrite(g, HIGH);
  digitalWrite(f, LOW);
  delay(5);
  digitalWrite(h, HIGH);
  digitalWrite(g, LOW);
  delay(5);
}
void Rotatedown() {
  digitalWrite(h, HIGH);
  digitalWrite(e, LOW);
  delay(5);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW);
  delay(5);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(5);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  delay(5);
}
