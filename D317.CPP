#include<iostream.h>
#include<conio.h>

class c1
{
  int no;

  public:

  c1()
  {
    cout<<"\nEnter 1st Number-> ";
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
    cout<<"\nEnter 2nd Number-> ";
    cin>>no;
  }

  friend void swap();
};

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

  cout<<"\nBefore Swapping: \n";
  cout<<"\nNumber 1=> "<<c1.no;
  cout<<"\nNumber 2=> "<<c2.no;

  int temp=c1.no;
  c1.no=c2.no;
  c2.no=temp;

  cout<<"\nAfter Swapping: \n";
  cout<<"\nNumber 1=> "<<c1.no;
  cout<<"\nNumber 2=> "<<c2.no;
}