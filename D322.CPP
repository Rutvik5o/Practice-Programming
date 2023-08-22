#include<iostream.h>
#include<conio.h>


class c1
{
  int no;

  public:

  c1()
  {
    cout<<"\nEnter Number 1=> ";
    cin>>no;
  }
  friend void average();
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
  friend void average();
};

class c3
{
  int no;

  public:

  c3()
  {
    cout<<"\nEnter Number 3-> ";
    cin>>no;
  }
  friend void average();
};

void average();

void main()
{
  clrscr();
  average();
  getch();
}

void average()
{
  int avg;

  c1 o1;
  c2 o2;
  c3 o3;

  cout<<"\nNumber 1=> "<<o1.no;
  cout<<"\nNumber 2=> "<<o2.no;
  cout<<"\nNumber 3=> "<<o3.no<<endl;

  avg=(o1.no+o2.no+o3.no)/3;

  cout<<"\nAverage=> "<<avg;
}


