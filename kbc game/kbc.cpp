 #include<iostream.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
void question2(void);
void moneybox(void);
void question3(void);
void question4(void);
char a;
main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"\\turboc3\\bgi");
 settextstyle(10,HORIZ_DIR,3);
 outtextxy(100,80,"WELCOME TO KBC GAME");
 settextstyle(5,HORIZ_DIR,5);
 outtextxy(10,300,"Loading the game... Please Wait");
 delay(7000);

while(1)
{ cleardevice();
 moneybox();
cout<<"\nQ.1 - Who is the first Prime Minister of India ? ";
cout<<"\n(a) Bheem rao ambedkar (b)Jawahar lal nehru\n\n(c) Narendra Modi      (d) Mahatma Gandhi";
cout<<"\nEnter your answer : ";
cin>>a;
if(a=='b')
{
 cout<<"\nCorrect Answer You win 5000 Rupees";
 question2();
 }
 else
 {
  cout<<"\nYou loose the game ";
  delay(1000);
  exit(0);
  }

 char ch;
 if(kbhit())
 {
  ch=getch();
  if(ch==27)
  {
   exit(0);
   }
   }
   getch();
   return 0;
 }
 }
 void moneybox(void)
 {
  settextstyle(0,HORIZ_DIR,0);
 rectangle(500,40,630,400);
outtextxy(510,65,"15-2,000,0000");
setcolor(2);
outtextxy(510,85,"14-1,000,0000");
setcolor(WHITE);
outtextxy(510,105,"13-50,00,000");
outtextxy(510,125,"12-25,00,000");
outtextxy(510,145,"11-12,50000");
outtextxy(510,165,"10-8,00,000");
setcolor(2);
outtextxy(510,185,"9-6,00,000");
setcolor(WHITE);
outtextxy(510,205,"8-4,00,000");
outtextxy(510,225,"7-2,00,000");
outtextxy(510,245,"6-1,00,000");
outtextxy(510,265,"5-75,000");
setcolor(2);
outtextxy(510,285,"4-50,000");
setcolor(WHITE);
outtextxy(510,305,"3-25,000");
outtextxy(510,325,"2-12,500");
outtextxy(510,345,"1-5,000");
}
 void question2(void)
 {
  cout<<"\nQ.2 - Which type of mirror are use as a rear-view mirror \nin vehicles ?";
  cout<<"\n(a) Concave mirrors (b) Simple Mirrors\n(c) Convex Mirrors  (d) Silica";
  cout<<"\n\nEnter your Answer : ";
  cin>>a;
  if(a=='c')
  {
   question3();
    }
  else
  {
   cout<<"\nYou loose the game";
   delay(1500);
   exit(0);
   }
   getch();
  }
  void question3(void)
  {
  cout<<"\nRight Answer, You win 12,500 Rupees";
  delay(1000);
   cout<<"\nQ.3 - Who is the current CEO of Microsoft ?\n(a) Satya Nadella (b) Bill Gates \n(c) Steve jobs    (d) Jeff Bezos";
   cout<<"\n\nEnter your Answer : ";
   cin>>a;
   if(a=='a')
   {
   cout<<"\nRight Answer, You Won 25000 Rupees";
   question4();
   }
   else
   {
    cout<<"\nYou loose the game ! ";
    delay(1500);
    exit(0);
    }
   }
   void question4(void)
   {          moneybox();
   cout<<"\n\nQ.4 - Who is the Wife of Virat Kohli ?";
   cout<<"\n(a) Priti Zinta (b) Bipasha Basu\n(c) Kajol      (d) Anushka Sharma";
   cout<<"\nEnter your answer : ";
   cin>>a;
   if(a=='d')
   {
    cout<<"\nCongrats ! You Won 50000 rupees and Complete\nThe First Round";
    }
    else
   {
   cout<<"\nYou loose the Game ";
   delay(1000);
   exit(0);
   }
  }
