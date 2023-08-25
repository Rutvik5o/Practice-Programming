#include<iostream.h>
#include<conio.h>

class one
{
  int no;

  one()
  {
    cout<<"\nEnter Number 1-> ";
    cin>>no;
  }

  friend void max();
};

class two
{
  int no;

  two()
  {
   cout<<"\nEnter Number 2-> ";
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
  one one;
  two two;

  cout<<"\nNumber 1=> "<<one.no<<"\nNumber 2=> "<<two.no;

  if(one.no>two.no)
  {
   cout<<"\nNumber 1 is greater";
  }
  else
  {
    cout<<"\nNumber 2 is greater";
  }

}