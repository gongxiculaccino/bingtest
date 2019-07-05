#include <Morse.h>

 
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
   case 'a':
            morse.dot();morse.dash();
            delay(250*3);
            break;
   case 'b':
            morse.dash();morse.dot();morse.dot();morse.dot();
            delay(250*3);
            break;
   case 'c':
            morse.dash();morse.dot();morse.dash();morse.dot();
            delay(250*3);
            break;
   case 'd':
            morse.dash();morse.dot();morse.dot();
            delay(250*3);
            break;
   case 'e':
            morse.dot();
            delay(250*3);
            break;
   case 'f':
            morse.dot();morse.dot();morse.dash();morse.dot();
            delay(250*3);
            break;
   case 'g':
            morse.dash();morse.dash();morse.dot();
            delay(250*3);
            break;
   case 'h':
            morse.dot();morse.dot();morse.dot();morse.dot();
            delay(250*3);
            break;
   case 'i':
            morse.dot();morse.dot();
            delay(250*3);
            break;
   case 'j':
            morse.dot();morse.dash();morse.dash();morse.dash();
            delay(250*3);
            break;
   case 'k':
            morse.dash();morse.dot();morse.dash();
            delay(250*3);
            break;
   case 'l':
            morse.dot();morse.dash();morse.dash(); morse.dot();morse.dot();
            delay(250*3);
            break;
   case 'm':
            morse.dash();morse.dash();
            delay(250*3);
            break;
   case 'n':
            morse.dash();morse.dot();
            delay(250*3);
            break;
   case 'o':
            morse.dash(); morse.dash(); morse.dash();
            delay(250*3);
            break;
   case 'p':
            morse.dot(); morse.dash(); morse.dash();morse.dot（）；
            delay(250*3);
            break;
   case 'r':
            morse.dot(); morse.dash(); morse.dash();morse.dot（）；
            delay(250*3);
            break;
   case 's':
            morse.dot();morse.dot();morse.dot（）；
            delay(250*3);
            break;
   case 't':
            morse.dash();
            delay(250*3);
            break;
   case 'u':
            morse.dot();morse.dot();morse.dash();
            delay(250*3);
            break;
   case 'v':
            morse.dot();morse.dot();morse.dot();morse.dash();
            delay(250*3);
            break;
   case 'w':
            morse.dot();morse.dash();morse.dash();
            delay(250*3);
            break;
   case 'x':
            morse.dash();morse.dot();morse.dot();morse.dash();
            delay(250*3);
            break;
   case 'y':
            morse.dash();morse.dot();morse.dash();morse.dash();
            delay(250*3);
            break;
   case 'z':
            morse.dash();morse.dot();pmorse.dash();morse.dot();
            delay(250*3);
            break;
   case ' ':
            delay(250*3)
            break;
    default
            break;
  }
 }
}
