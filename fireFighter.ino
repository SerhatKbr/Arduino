const int ina=8;
const int inb=9;
const int FOR=10;
const int trig=11;
const int echo=12;
#define In1 7
#define In2 6                    
#define In3 5
#define In4 4 

int sure=0;
int mesafe=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ina, OUTPUT);
  pinMode(inb, OUTPUT);
  pinMode(FOR, INPUT);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
   pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(trig,HIGH);
 delayMicroseconds(1000);
 digitalWrite(trig,LOW);

  sure = pulseIn(echo,HIGH);
  mesafe = (sure/2) / 28.5;

 Serial.print("cisme olan uzaklık = ");
 Serial.println(mesafe);
 Serial.println("--------------");

 switch(digitalRead(FOR))  {
  
  case 1: 

      if(mesafe>9) {

  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  delay(100);
  digitalWrite(In1,LOW);
  digitalWrite(In2,LOW);
  digitalWrite(In3,LOW);
  digitalWrite(In4,LOW);
  delay(1000);
  break;

    }

   else if(mesafe<=9) {

  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  digitalWrite(In3,LOW);
  digitalWrite(In4,HIGH);
  delay(100);
  digitalWrite(In1,LOW);
  digitalWrite(In2,LOW);
  digitalWrite(In3,LOW);
  digitalWrite(In4,LOW);
  delay(1000);
  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  delay(200);
  digitalWrite(In1,LOW);
  digitalWrite(In2,LOW);
  digitalWrite(In3,LOW);
  digitalWrite(In4,LOW);
  delay(1000);
 break; }

 case 0:

  if(mesafe>9) {

  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  delay(100);
  digitalWrite(In1,LOW);
  digitalWrite(In2,LOW);
  digitalWrite(In3,LOW);
  digitalWrite(In4,LOW);
  delay(1000);
  break;  } 

else if( mesafe >=5 and mesafe<=9){

  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  delay(100);  }

 else {
  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  digitalWrite(In3,LOW);
  digitalWrite(In4,HIGH);
  delay(20);
  digitalWrite(In1,LOW);
  digitalWrite(In2,LOW);
  digitalWrite(In3,LOW);
  digitalWrite(In4,LOW);
  delay(1000);
  digitalWrite (ina,HIGH);
  digitalWrite(inb,LOW);
  delay(8000);
digitalWrite (ina,LOW);
digitalWrite(inb,LOW);
delay(1000); 
 break;
}}}







 

