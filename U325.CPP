#include<iostream.h>
#include<conio.h>
#include<string.h>

class String
{
  public:

   char ch[10];


   String() {}

   String(char *c)
   {
     strcpy(ch,c);
   }

   String(String &x)
   {
     strcpy(ch,x.ch);
   }

   void display()
   {
     cout<<"\nText=> "<<ch;
   }
};

void main()
{
  clrscr();

  String s1("Hello Welcome");
  s1.display();

  String s2(s1);
  s2.display();

  getch();
}