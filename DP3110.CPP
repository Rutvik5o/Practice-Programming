#include<iostream.h>
#include<conio.h>

class in
{
  int no;

  public:

  void input()
  {
    cout<<"\nEnter Number-> ";
    cin>>no;
  }

  void output()
  {
    cout<<"\nNumber is => "<<no;
  }
};

void main()
{
  clrscr();

  in one;

  in *ptr=&one;

  ptr->input();

  ptr->output();

  getch();
}


