#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
int x=1,y=1;
void a();
void b();
void c();
void d();
void e();
void f();
void g();
void h();
void I();
void j();
void k();
void l();
void m();
void n();
void o();
void p();
void q();
void r();
void s();
void t();
void u();
void v();
void w();
void X();
void Y();
void z();
main()
{
 char name[30];
 int length;
 clrscr();
   gotoxy(20,20);
   textcolor(4);
   cprintf("--------------------");
   textcolor(5);
   gotoxy(20,20);
 cprintf("\nEnter You First Name : ");
 gets(name);
 clrscr();
 length= strlen(name);
 for(int i=0; i<length; i++)
 {
    if((name[i]=='a') || (name[i]=='A'))
    { a(); }
    else if((name[i]=='b') || (name[i]=='B'))
    { b(); }
    else if((name[i]=='c') || (name[i]=='C'))
    { c(); }
    else if((name[i]=='d') || (name[i]=='D'))
    { d(); }
    else if((name[i]=='e') || (name[i]=='E'))
    { e(); }
     else if((name[i]=='f') || (name[i]=='F'))
     { f(); }
     else if((name[i]=='g') || (name[i]=='G'))
     { g(); }
     else if((name[i]=='h') || (name[i]=='H'))
     { h(); }
     else if((name[i]=='i') || (name[i]=='I'))
     { I(); }
     else if((name[i]=='j') || (name[i]=='J'))
     { j(); }
     else if((name[i]=='k') || (name[i]=='K'))
     { k(); }
     else if((name[i]=='l') || (name[i]=='L'))
     { l(); }
     else if((name[i]=='m') || (name[i]=='M'))
     { m(); }
     else if((name[i]=='n') || (name[i]=='N'))
     { n(); }
     else if((name[i]=='o') || (name[i]=='O'))
     { o(); }
     else if((name[i]=='p') || (name[i]=='P'))
     { p(); }
     else if((name[i]=='q') || (name[i]=='Q'))
     { q(); }
     else if((name[i]=='r') || (name[i]=='R'))
     { r(); }
     else if((name[i]=='s') || (name[i]=='S'))
     { s(); }
     else if((name[i]=='t') || (name[i]=='T'))
     { t(); }
     else if((name[i]=='u') || (name[i]=='U'))
     { u(); }
     else if((name[i]=='v') || (name[i]=='V'))
     { v(); }
     else if((name[i]=='w') || (name[i]=='W'))
     { w(); }
     else if((name[i]=='x') || (name[i]=='X'))
     { X(); }
     else if((name[i]=='y') || (name[i]=='Y'))
     { Y(); }
     else if((name[i]=='z') || (name[i]=='Z'))
     { z(); }
      else
     {gotoxy(20,20);
     printf("\nERROR MESSAGE BOX : \n");
     printf("-------------------------------");
     printf("\n| You entered wrong character  |");
     printf("\n| OR                           |");
     printf("\n| Whitespace in your           |");
     printf("\n| First Name                   |");
     printf("\n-------------------------------");
     }
     }
     getch();
     return 0;
     }
     void a()
     {    x=1; y=1;
      int i;
      for(i=0; i<5; i++)
      {
       delay(200);
       gotoxy(x,y);
       textcolor(i);
       cprintf("%c",3);
       y++;
       } x=2; y=1;
       gotoxy(x,y);
       textcolor(i);
       cprintf("%c",3);     x=3;
       for(i=0; i<5; i++)
      {
       delay(200);
       gotoxy(x,y);
       textcolor(i);
       cprintf("%c",3);
       y++; }
       x=2;
       y=3;
       gotoxy(x,y);
       textcolor(i);
       cprintf("%c",3);
}
 void b()
 { x=6; y=1;   int i;
  for(i=0; i<4; i++)
      {
       delay(200);
       gotoxy(x,y);
       textcolor(i);
       cprintf("%c",3);
       y++;
       }
       y=1; x=7;
       for(i=1; i<3; i++)
       {
       delay(200);
       gotoxy(x,y);
       textcolor(5);
       cprintf("%c",3);
       x++;}
       x=9; y=2;
       delay(200);
       gotoxy(x,y);
       textcolor(5);
       cprintf("%c",3);
       x=8; y=3;
       delay(200);
       gotoxy(x,y);
       textcolor(4);
       cprintf("%c",3);
       x=9; y=4;
       delay(200);
       gotoxy(x,y);
       textcolor(5);
       cprintf("%c",3);
       x=8; y=5;
       delay(200);
       gotoxy(x,y);
       textcolor(4);
       cprintf("%c",3);
       x=7; y=5;
       delay(200);
       gotoxy(x,y);
       textcolor(4);
       cprintf("%c",3);
       }
  void c()
  { x=12; y=1;   int i;
   for( i=1; i<5; i++)
   {delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }
    x=12;
    for( i=1; i<6; i++)
   {delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }    y--;  x++;
    for(i=1; i<4; i++)
   {delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
     x++;
     }
    }
   void d()
   {        int i;
    x=18; y=1;
    for(i=0; i<4; i++)
    {
     delay(200);
     gotoxy(x,y);
     textcolor(i);
     cprintf("%c",3);
     x++;
     }  x=18;
     for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }            y--;
     for(i=1; i<4; i++)
   {delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }  y=1;
     for(i=0; i<4; i++)
   {delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
}
  void e()
  {
   x=24; y=1; int i;
   for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++; }
     y=1;
    for(i=1; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    } x=24;y=3;
    for(i=1; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    } x=24; y=5;
    for(i=1; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }
   }
   void f()
   {
    x=29; y=1; int i;
    for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    } y=1;
    for(i=1; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    } x=29; y=3;
    for(i=1; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }
   }
   void g()
   {    int i;
    x=34; y=1;
     for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    } y=1;
     for(i=1; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    } x-=3; y=5;
     for(i=1; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
      x++;
      }
       for(i=1; i<3; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y--;
    }
     for(i=1; i<3; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x--;
    }
   }
   void h()
   {
    x=40; y=1; int i;
     for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    } y -=3;
     for(i=1; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    } y=1;
     for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
    }
    void I()
    {
     int i;
     x=46; y=1;
      for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
   }
   void j()
   {
    int i;
    x=49; y=5;
     for(i=1; i<3; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }
     for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y--;
    }
    }
    void k()
    {
     x=54; y=1; int i;
      for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    } y -= 2;
     for(i=1; i<5; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    y--;
    }  x -= 3;  y +=3;
      for(i=1; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    y++;
    }
    }
    void l()
    {
     x=61; y=1;
     int i;
      for(i=1; i<5; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
     for(i=1; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }
    }
    void m()
    {
    x=66; y=1;
    int i;
     for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }  y=1;
     for(i=1; i<3; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    y++;
    }
     for(i=1; i<3; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
      x++;
      y--;
      }
    for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
    }
    void n()
    {  x=73; y=1;
    int i;
    for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }y=1;
    for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++; y++;
    }  x--; y--;
    for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y--;
    }
    }
    void o()
    {
     x=1; y=7;
     int i;
      for(i=0; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    } y=7; x++;
    for(i=1; i<3; i++)
    {
    gotoxy(x,y);
    textcolor(4);
    cprintf("%c",3);
    x++;}
     for(i=0; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
   x--;
   for(i=1; i<3; i++)
   {
    gotoxy(x,y);
    textcolor(3);
    cprintf("%c",3);
    x--;
    }
    }
    void p()
    {
     x=7; y=7;
     int i;
      for(i=1; i<6; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    } y=7;
     for(i=1; i<3; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }
     for(i=1; i<3; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
     for(i=1; i<3; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x--;
    }
   }
   void q()
   { x=12;
     y=7;
     int i;
      for(i=0; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    } y=7; x++;
    for(i=1; i<3; i++)
    {
    gotoxy(x,y);
    textcolor(4);
    cprintf("%c",3);
    x++;}
     for(i=0; i<4; i++)
     {
    delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
   x--;
   for(i=1; i<3; i++)
   {
    gotoxy(x,y);
    textcolor(3);
    cprintf("%c",3);
    x--;
    } x=14; y=10;
      for(i=1; i<3; i++)
   {
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x +=2; y++;
    }
    }
    void r()
    {
     x=19; y=7;
     int i;
      for(i=1; i<6; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }  y=7;
     for(i=1; i<3; i++)
   {delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }
     for(i=1; i<3; i++)
   {           delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
     for(i=1; i<3; i++)
   {           delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x--;
    }
     for(i=1; i<4; i++)
   {          delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++; y++;
    }
    }
    void s()
    {
     x=24; y=7;
     int i;
 for(i=1; i<3; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
       for(i=1; i<3; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }
       for(i=1; i<3; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
       for(i=1; i<4; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x--;
    }x=24; y=7;
       for(i=1; i<4; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }
    }
    void t()
    {
     x=29; y=7;      int i;
 for(i=1; i<4; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }
    x -=2;
       for(i=1; i<6; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
   }
   void u()
   {
    x=34; y=7;
    int i;
       for(i=1; i<6; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }           y--;
       for(i=1; i<4; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }
       for(i=1; i<6; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y--;
    }
   }
   void v()
   {
    x=40; y=7;
    int i;
       for(i=1; i<4; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    } x++;
    for(i=1; i<3; i++)
    {
    gotoxy(x,y);
    textcolor(8);
    cprintf("%c",3);
    x++;  y++;
    } y-=2;
    gotoxy(x,y);
    textcolor(7);
    cprintf("%c",3);
    x++; y--;
    gotoxy(x,y);
    textcolor(6);
    cprintf("%c",3);

       for(i=1; i<4; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y--;
    }
   }
   void w()
   { x=47; y=7;
   int i;
       for(i=1; i<5; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
       for(i=1; i<3; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    y--;
    }
 for(i=1; i<3; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    y++;
    }
 for(i=1; i<6; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y--;
    }
}
void X()
{
 int i;
 x=54; y=7;
     for(i=1; i<6; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    y++;
    }  y=7;   x--;
 for(i=1; i<6; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x--;
    y++;
    }
    }
    void Y()
    {
     x=61; y=7;
     int i;
  for(i=1; i<4; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    y++;
    }
    y=7; x++;
 for(i=1; i<4; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x--;
    y++;
    }      x++;
 for(i=1; i<3; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    y++;
    }
    }
    void z()
    {
     int i;
     x=68; y=7;
  for(i=1; i<5; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }
 for(i=1; i<6; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x--;
    y++;
    } x ++;          y--;
 for(i=1; i<6; i++)
   { delay(200);
    gotoxy(x,y);
    textcolor(i);
    cprintf("%c",3);
    x++;
    }
    }	
