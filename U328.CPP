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

class book: public publisher
{
  int pages;

  public:

  void input()
  {
    publisher::input();

    cout<<"\nEnter No. Of Pages-> ";
    cin>>pages;

  }

  void display()
  {
    cout<<"\nTitle=> "<<title;
    cout<<"\nNo. Of Pages=> "<<pages;
  }
};

class tape: public publisher
{
  int time;

  public:

    void input()
    {
      cout<<"\nEnter Playing Time(Min)-> ";
      cin>>time;
    }

    void display()
    {
      cout<<"\nTotal Playing Time(Min)=> "<<time<<endl;
    }
};

void main()
{
  clrscr();

  book b1;
  tape t1;

  cout<<"\nEnter Details:\n";
  b1.input();
  t1.input();

  cout<<"\nOutput=>\n";
  b1.display();
  t1.display();

  getch();
}