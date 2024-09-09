 
 //Connrct two LED With Arduino to blink one LED_1 Before LED_2

 int blue=8;
 int white=13;
 int red=11;
void setup() 
{


 pinMode(blue,OUTPUT);
 pinMode(white,OUTPUT);
 pinMode(red,OUTPUT);
} 



void loop() 
{
  
    
  
 digitalWrite(blue,HIGH);
 delay(2000);
 digitalWrite(white,HIGH);
 delay(2000);
digitalWrite(red,HIGH);
 delay(2000);

digitalWrite(red,LOW);
delay(2000);
digitalWrite(white,LOW);
delay(2000);
digitalWrite(blue,LOW);
delay(2000);

exit(0);

 
  }
 
    
  
  
