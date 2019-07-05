
 
void setup()
{
  Serial.begin(9600);//设置波特率
}

int icb;
void loop()
{
 if(Serial.available()>0)
 {
  icb=Serial.read();
  switch(icb)
  {
    case 65://A
           dot();dash();
            delay(250*3);
            break;
    case 66://B
            dash();dot();dot();dot();
            delay(250*3);
            break;
    case 67://C
            dash();dot();dash();dot();
            delay(250*3);
            break;
    case 68://D
            dash();dot();dot();
            delay(250*3);
            break;
    case 69://E
            dot();
            delay(250*3);
            break;
    case 70://F
            dot();dot();dash();dot();
            delay(250*3);
            break;
    case 71://G
            dash();dash();dot();
            delay(250*3);
            break;
    case 72://H
            dot();dot();dot();dot();
            delay(250*3);
            break;
    case 73://I
           dot();dot();
            delay(250*3);
            break;
    case 74://J
            dot();dash();dash();dash();
            delay(250*3);
            break;
    case 75://K
           dash();dot();dash();
            delay(250*3);
            break;
    case 76://L
            dot();dash();dash(); dot();dot();
            delay(250*3);
            break;
    case 77://M
            dash();dash();
            delay(250*3);
            break;
    case 78://N
            dash();dot();
            delay(250*3);
            break;
    case 79://o
            dash();dash();dash();
            delay(250*3);
            break;
    case 80://P
           dot();dash();dash();dot();
            delay(250*3);
            break;
     case 81://R
           dot();dash();dash();dot();
            delay(250*3);
            break;
    case 82://S
            dot();dot();dot();
            delay(250*3);
            break;
    case 83://T
            dash();
            delay(250*3);
            break;
    case 84://U
           dot();dot();dash();
            delay(250*3);
            break;
    case 85://V
            dot();dot();dot();dash();
            delay(250*3);
            break;
     case 86://W
            dot();dash();dash();
            delay(250*3);
            break;
    case 87://X
            dash();dot();dot();dash();
            delay(250*3);
            break;
    case 88://Y
           dash();dot();dash();dash();
            delay(250*3);
            break;
    case 89://Z
            dash();dot();dash();dot();
            delay(250*3);
            break;
    case 90://空格
            delay(250*3);
            break;
    default:
            break;
  }
 }
}




void dot()
{
   
  digitalWrite(12,HIGH);
  delay(250);
  digitalWrite(12,LOW);
  delay(250);
}

void dash()
{ 
   
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  delay(250);
}
