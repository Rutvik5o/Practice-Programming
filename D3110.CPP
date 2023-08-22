#include<iostream.h>
#include<conio.h>

class c1
{
  int no;

  public:

  void get()
  {
    cout<<"\nEnter Number-> ";
    cin>>no;
  }

  void disp()
  {
    cout<<"\nNumber=> "<<no;
  }
};

void main()
{
  c1 ca;

  c1 *ptr=&ca;

  ptr->get();

  ptr->disp();

  getch();
}