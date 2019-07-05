//在tinkercad上边写的，然后复制到了arduino上

int income = 0;

void setup()
{
  pinMode(8,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  if(Serial.available()>0)
  {
    income = Serial.read();
    switch(income)
    {
     case 0:
      ledflash0;
      break;
     case 1:
      ledflash1;
      break;
     case 2:
      ledflash2;
      break;
     case 3:
      ledflash3;
      break;
     case 4:
      ledflash4;
      break;
     case 5:
      ledflash5;
      break;
     case 6:
      ledflash6;
      break;
     case 7:
      ledflash7;
      break;
     case 8:
      ledflash8;
      break;
     case 9:
      ledflash9;
      break;
     default:
      break;
    }
  }
}
void ledflash0()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(8,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
  delay(10);    
}
void ledflash1()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(8,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
  delay(10);    
}
void ledflash2()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(8,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
  delay(10);    
}
void ledflash3()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(8,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
  delay(10);    
}
void ledflash4()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(8,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
  delay(10);    
}
void ledflash5()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(8,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
  delay(10);    
}
void ledflash6()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(8,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
  delay(10);    
}
void ledflash7()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(8,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
  delay(10);    
}
void ledflash8()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(8,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(10);
  digitalWrite(5,HIGH);
  delay(10);    
}
void ledflash9()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(8,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(10);
  digitalWrite(5,HIGH);
  delay(10);    
}
