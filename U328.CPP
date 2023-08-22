#include<iostream.h>
#include<conio.h>

class publisher
{
  protected:

  char title[20];

  public:

  void input()
  {
   cout<<"\nEnter Title Name-> ";
   cin>>title;
  }
};

class Book:public publisher
{
  int pages;

  public:

  void input()
  {
    publisher::input();

    cout<<"\nEnter Number Of Pages-> ";
    cin>>pages;
  }

  void display()
  {
     cout<<"\nTitle=> "<<title<<endl;
     cout<<"\nPages=> "<<pages<<endl;
  }
};

class Tape: public publisher
{
  int time;

  public:

  void input()
  {
  cout<<"\nEnter Playing Min Of Tape-> ";
  cin>>time;
  }

  void display()
  {
    cout<<"\nPlaying Time Of Tape=> "<<time;
  }
};

void main()
{
  clrscr();

  Book b1;
  Tape t1;

  cout<<"\nEnter Details:\n";

  b1.input();
  t1.input();

  cout<<"\nData:\n";

  b1.display();
  t1.display();

  getch();
}


