#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{
  char ch[20];

  public:

  string() {}

  string(char *c)
  {
    strcpy(ch,c);
  }

  string(string &a)
  {
    strcpy(ch,a.ch);
  }

  void display()
  {
   cout<<"\nText=> "<<ch;
  }
};

void main()
{
 clrscr();

 string s1("Welcome");
 s1.display();

 string s2(s1);

 s2.display();

 getch();
}