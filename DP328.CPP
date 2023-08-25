#include<iostream.h>
#include<conio.h>

class publisher
{
  protected:

  char title[20];

  public:

  void get()
  {
   cout<<"\nEnter Title Name-> ";
   cin>>title;
  }
};

class Book:public publisher
{
  int pages;

  public:

  Book()
  {
  get();
  cout<<"\nEnter Book Pages-> ";
  cin>>pages;
  }

  void display()
  {
    cout<<"\nTitle=> "<<title;
    cout<<"\nTotal Pages=> "<<pages;
  }
};

class Tape: public publisher
{
  int time;

  public:

  Tape()
  {
    cout<<"\nEnter Tape Playing Time(Min)-> ";
    cin>>time;
  }

  void display()
  {
    cout<<"\nPlaying Time For Tape=> "<<time;
  }
};

void main()
{
  clrscr();

  Book b1;

  Tape t1;

  b1.display();

  t1.display();

  getch();
}




