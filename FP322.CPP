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
  friend void avg();
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

 friend void avg();
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
  c1 c1;
  c2 c2;
  c3 c3;

  int avg;

  avg=(c1.no+c2.no+c3.no)/3;

  cout<<"\nAverage=> "<<avg;

}