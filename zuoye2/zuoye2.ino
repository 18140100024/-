void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}
int income = 0;
void loop()
{
  while(Serial.available() > 0)
  {
    income = Serial.read()-'0';
    switch(income)
      {
          case 1:
            show_one();
              break;
            case 2:
            show_two();
              break;
            case 3:
            show_three();
              break;
            case 4:
            show_four();
              break;
            case 5:
            show_five();
              break;
          case 6:
            show_six();
            break;
          case 7:
            show_seven();
            break;
          case 8:
            show_eight();
            break;
          case 9:
            show_nine();
            break;
          case 0:
            show_zero();
            break;
            default:
              break;
       }
  }
}
void show_one()
{
  digitalWrite(10,LOW);
  delay(100);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(10,HIGH);
  delay(100);
}

void show_two()
{
  digitalWrite(10,LOW);
  delay(100);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
  delay(100);
}
void show_three()
{
  digitalWrite(10,LOW);
  delay(100);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
  delay(100);
}
void show_four()
{
  digitalWrite(10,LOW);
  delay(100);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(10,HIGH);
  delay(100);
}
void show_five()
{
  digitalWrite(10,LOW);
  delay(100);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(10,HIGH);
  delay(100);
}
void show_six()
{
  digitalWrite(10,LOW);
  delay(1000);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
  delay(1000);
  
}
void show_seven()
{
  digitalWrite(10,LOW);
  delay(100);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
  delay(100);
}
void show_eight()
{
  digitalWrite(10,LOW);
  delay(100);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(10,HIGH);
  delay(100);
  
}
void show_nine()
{
  digitalWrite(10,LOW);
  delay(100);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(10,HIGH);
  delay(100);
}
void show_zero()
{
  digitalWrite(10,LOW);
  delay(100);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(10,HIGH);
  delay(100);
}
