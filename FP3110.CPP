#include<iostream.h>
#include<conio.h>

class a
{
  int no;

  public:

  void get()
  {
   cout<<"\nEnter Number -> ";
   cin>>no;
  }

  void disp()
  {
   cout<<"\nEntered Number=> "<<no;
  }
};

void main()
{
  a b;
  a *ptr=&b;

  ptr->get();

  ptr->disp();

  getch();
}