#include<iostream.h>
#include<conio.h>

class c1
{
  int no;
  c1()
  {
    cout<<"\nEnter 1st Number-> ";
    cin>>no;
  }

  friend void max();
};

class c2
{
  int no;

  c2()
  {
    cout<<"\nEnter 2nd Number-> ";
    cin>>no;
  }

  friend void max();
};

void max();

void main()
{
  clrscr();
  max();
  getch();
}

void max()
{
 c1 o1;
 c2 o2;

 cout<<"\nNumber 1=> "<<o1.no;
 cout<<"\nNumber 2=> "<<o2.no;

 if(o1.no>o2.no)
 {
   cout<<"\nNumber 1 is larger";
 }
 else
 {
   cout<<"\nNumber 2 is larger";
 }
}