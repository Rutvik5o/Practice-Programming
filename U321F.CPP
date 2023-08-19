#include<iostream.h>
#include<conio.h>

class c1
{
  int no;

  public:

  c1()
  {
   cout<<"\nEnter First Number-> ";
   cin>>no;
  }

  friend void max();
};

class c2
{
 int no;

 public:

  c2()
  {
   cout<<"\nEnter Second Number-> ";
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

   cout<<"\n1st Number-> "<<o1.no;
   cout<<"\n2nd Number-> "<<o2.no;

   if(o1.no>o2.no)
   {
     cout<<"\n"<<o1.no<<" is larger";
   }
   else
   {
     cout<<"\n"<<o2.no<<" is larger";
   }
 }
