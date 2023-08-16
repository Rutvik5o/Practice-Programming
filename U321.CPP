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

 friend void max();
};

class c2
{
 int no;

 public:
   c2()
   {
     no=20;
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

  cout<<"\nNumber 1-> "<<o1.no<<endl;
  cout<<"\nNumber 2-> "<<o2.no<<endl;

  if(o1.no>o2.no)
  cout<<o1.no<<" is larger";
  else
  cout<<o2.no<<" is larger";
}