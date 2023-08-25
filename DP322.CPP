#include<iostream.h>
#include<conio.h>

class a
{
  int no;

  public:

  a()
  {
    cout<<"\nEnter Number 1-> ";
    cin>>no;
  }

  friend void avg();
};

class b
{
  int no;

  public:

  b()
  {
    cout<<"\nEnter Number 2-> ";
    cin>>no;
  }

  friend void avg();
};

class c
{
  int no;

  public:

  c()
  {
    cout<<"\nEnter Number 3-> ";
    cin>>no;
  }

  friend void avg();
};

void avg();

void main()
{
 clrscr();

 avg();

 getch();
}

void avg()
{
  int avg;

  a a;
  b b;
  c c;

  avg=(a.no+b.no+c.no)/3;

  cout<<"Average=> "<<avg;
}