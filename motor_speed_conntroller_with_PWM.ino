int pot=A0;
int motor_en =3;
int motor_pin = 4;
int x;
void setup() {
  
  pinMode(A0,INPUT);
  pinMode(motor_en,OUTPUT);
  pinMode(motor_pin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 //potentiometer
  x=analogRead(pot);
  int val = map( x,0,1023,0,255);
  digitalWrite(motor_pin,HIGH);
  analogWrite(motor_en,val);
  Serial.println(x);
  Serial.println(val);
  delay(1000);
}
