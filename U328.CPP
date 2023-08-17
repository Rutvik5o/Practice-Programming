#include<iostream.h>
#include<conio.h>

class publisher
{
  protected:

    char title[20];

    void input()
    {
      cout<<"\nEnter Title Name-> ";
      cin>>title;
    }
};

class book:public publisher
{
  int page;

  public:

  void input()
  {
    publisher::input();

    cout<<"\nEnter No. Of Pages-> ";
    cin>>page;
  }

  void output()
  {
    cout<<"\nTitle=> "<<title;
    cout<<"\nNo. Of Pages=> "<<page;
  }
};

class tape:public publisher
{
  int time;

  public:

   void input()
  {
   cout<<"\nEnter Playing Time(Min)-> ";
   cin>>time;
  }

  void output()
  {
    cout<<"\nPlaying Time(min)=> "<<time;
  }
};

void main()
{
  clrscr();
  book b1;
  tape t1;

  b1.input();
  t1.input();

  cout<<"\nBook Details=> ";

  b1.output();
  t1.output();

  getch();
}
