#include<iostream.h>
#include<conio.h>

class demo
{
 int no;

 public:

 void get()
 {
   cin>>no;
 }

 void dis()
 {
  cout<<no;
 }
};

void main()
{
 demo obj;

 demo *ptr=&obj;

 cout<<"\nEnter Number-> ";
 ptr->get();

 cout<<"\nNumber is=> ";
 ptr->dis();

 getch();
}