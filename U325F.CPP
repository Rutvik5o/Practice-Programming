#include<iostream.h>
#include<string.h>
#include<conio.h>

class string
{
  char ch[10];

  public:

  string() {}

  string(char *c)
  {
    strcpy(ch,c);
  }

  string(string &x)
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
  string ob1("Welcome to our C++");

  ob1.display();

  string ob2(ob1);

  ob2.display();

  getch();
}
