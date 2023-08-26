#include<iostream.h>
#include<conio.h>

class c1
{
  int no;

  c1()
  {
    cout<<"\nNumber 1-> ";
    cin>>no;
  }

  friend void max();
};

class c2
{
  int no;

  c2()
  {
    cout<<"\nNumber 2-> ";
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
 c1 c1;
 c2 c2;

 if(c1.no>c2.no)
 {
   cout<<"\nNumber 1 is Larger";
 }
 else
 {
  cout<<"\nNumber 2 is Larger";
 }
}