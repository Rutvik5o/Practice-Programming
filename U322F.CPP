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

   friend void average();
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

  friend void average();
};

class c3
{
  int no;

  public:

   c3()
   {
     cout<<"\nEnter 3rd Number-> ";
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

  c1 ob1;
  c2 ob2;
  c3 ob3;

  cout<<"\nNumber 1-> "<<ob1.no;
  cout<<"\nNumber 2-> "<<ob2.no;
  cout<<"\nNumber 3-> "<<ob3.no;


  avg=(ob1.no+ob2.no+ob3.no)/3;

  cout<<endl<<"\nAverage=> "<<avg;
}