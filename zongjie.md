#2019国际双创实践周开源硬件实战课程总结
>通信工程学院 任冰怡 18010100065 
>课时间：2019/7/2-2019/7/5上午

##Day1 入门介绍

·什么是开源硬件

·为什么要学习开源硬件

·如何才能学好开源硬件

·几个开源中常用软件

###arduino

###fritzing

###processing

·几个常用网站

###github

###tinkercad

####
#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(250);
	digitalWrite(_pin,LOW);
	delay(250);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(1000);
	digitalWrite(_pin,LOW);
	delay(250);
}

##Day2 软件操作

·arduino安装

·arduino基础编程语言，类库操作

·串口的使用

·锁存！！

·Morse

####void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}
int income=0;
void loop()
{
  if(Serial.available()>0)
    {
      income=Serial.read();
        switch(income)
        {
          case 'f':
              forward();break;
            case 'b':
              backward(); break;
            case 'l':
              left();break;
            case 'r':
              right();break;
            case 's':
              stop();break;
            default:
              break;
        }
    }
}

void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void backward()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}

void left()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}

void right()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void stop()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
####
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
##Day3 元器件及电路图

·7位译码管的使用

·CD4511的使用

·灵活运用锁存

·电机、PWM技术

##Day4 总结 答疑交流

·在tinkercad上完善Morse代码

·撰写总结报告

·上传GitHub库格式

####

 
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


##总结：经过开源硬件实战四天的学习，了解到了许多新的知识，初步接触了arduino，processing，fritzing等软件，了解到GitHub网站，相信这些我所学到的知识对以后大二大三的学习会十分有帮助。在tinkercad平台上进行的模拟仿真，能够更加清楚的判断自己的代码是否正确，在缺少实物板子的情况下，仍然能够模拟操作，在我看来，tinkercad是一个非常好用的平台。在自己模拟仿真的过程中，自己不断思考，不断去想，不会的上百度搜索，请教别人，然后自己操作完成。在tinkercad上主要完成了控制7位数码管，以及弄清楚cd4511的使用。在做控制数码管的作业的时候，由于不懂cd4511的使用，百度上搜索学到了，锁存控制是一个重点，是用它来控制灯是否发光。在这四天里，学到的不仅仅是知识，更重要的是，学到了学习方法，以前一直被动学习，成绩也不理想，在这几天里，自己思维也有了一个转变，总的来说，收获蛮大的，感谢老师。
