#include<iostream.h>
#include<conio.h>

class publisher
{
  protected:

    char title[20];

    void input()
    {
      cout<<"\nEnter the Title-> ";
      cin>>title;
    }
};

class Book: public publisher
{
  int pages;

  public:
  void input()
  {
    publisher::input();

    cout<<"\nEnter No. of pages-> ";
    cin>>pages;
  }

  void display()
  {
    cout<<"\nTitle=> "<<title;
    cout<<"\nNumber of Pages=> "<<pages;
  }
};

class Tape: public publisher
{
  int ptime;

  public:

  void input()
  {
    cout<<"\nEnter Tape Playing Time(Min)-> ";
    cin>>ptime;
  }

  void display()
  {
    cout<<"\nPlaying Time of Tape In Minute=> ";
  }
};

void main()
{
  Book b1;
  Tape t1;

  cout<<"\nEnter The Details:\n"<<endl;

  b1.input();
  t1.input();

  cout<<"\nData of Details:\n"<<endl;

  b1.display();
  t1.display();

  getch();
}