void setup()
{
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  show_one();
  show_two();
  show_three();
  show_four();
 
}
void show_one()
{
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(100);
  digitalWrite(12,LOW);
  delay(100);
  digitalWrite(5,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  digitalWrite(12,HIGH);
  delay(100);
}

void show_two()
{
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  delay(100);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(11,HIGH);
  delay(100);
}
void show_three()
{
  digitalWrite(9,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  delay(100);
  digitalWrite(3,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(10,HIGH);
  delay(100);
}
void show_four()
{
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(9,LOW);
  delay(100);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  delay(100);
}
