#include<iostream.h>
#include<conio.h>

class c1
{
  int no;

  public:

  c1()
  {
    cout<<"\nEnter Number 1-> ";
    cin>>no;
  }

  friend void swap();
};

class c2
{
  int no;

  public:

  c2()
  {
    cout<<"\nEnter Number 2-> ";
    cin>>no;
  }

  friend void swap();
};

void swap();

void main()
{
  clrscr();

  swap();

  getch();
}

void swap()
{
  c1 c1;
  c2 c2;

  cout<<"\nNumber 1=> "<<c1.no;

  cout<<"\nNumber 2=> "<<c2.no;

  cout<<"\nAfter Swapping:";

  int temp=c1.no;
  c1.no=c2.no;
  c2.no=temp;

  cout<<"\nNumber 1=> "<<c1.no;

  cout<<"\nNumber 2=> "<<c2.no;
}