#include<iostream.h>
#include<conio.h>

class c1
{
  int no;

  public:

  c1()
  {
    no=10;
  }
  friend void average();
};

class c2
{
 int no;

 public:

 c2()
 {
   no=20;
 }

 friend void average();
};

class c3
{
  int no;

  public:

  c3()
  {
    no=30;
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
  c1 ob1;
  c2 ob2;
  c3 ob3;

  int avg;

  cout<<"\nNumber 1=> "<<ob1.no<<endl;
  cout<<"\nNumber 2=> "<<ob2.no<<endl;
  cout<<"\nNumber 3=> "<<ob3.no<<endl;

  avg=(ob1.no+ob2.no+ob3.no)/3;

  cout<<"\nAverage=> "<<avg<<endl;
}