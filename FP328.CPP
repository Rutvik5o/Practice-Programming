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

class Book : public publisher
{
  int pages;

  public:

  void input()
  {
    get();

    cout<<"\nEnter Pages-> ";
    cin>>pages;
  }

  void output()
  {
   cout<<"\nTitle=> "<<title;
   cout<<"\nTotal Pages=> "<<pages;
  }
};

class Tape: public publisher
{
 int time;

 public:

 void input()
 {
   cout<<"\nEnter Tape Playing Time(min)-> ";
   cin>>time;
 }

 void output()
 {
   cout<<"\nPlaying Time=> "<<time;
 }
};

void main()
{
 clrscr();

 Book b1;
 Tape t1;

 b1.input();
 t1.input();

 b1.output();
 t1.output();

 getch();
}