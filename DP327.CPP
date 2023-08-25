#include<iostream.h>
#include<conio.h>

class scheme
{
  protected:

  int id;
  char name[20];
  float outrate,msgcharge;

  public:

  void get()
  {
   cout<<"\nEnter Scheme ID-> ";
   cin>>id;

   cout<<"\nEnter Scheme Name-> ";
   cin>>name;

   cout<<"\nEnter Call Going Charge Per Min-> ";
   cin>>outrate;

   cout<<"\nEnter Message Charger Per Messsage-> ";
   cin>>msgcharge;
  }
};

class customer:public scheme
{
  int id;
  double phone;
  char name[20];
  float callbill,msgbill,callmin,msgcount,totalbill;

  public:

  customer()
  {
    get();

    cout<<"\nEnter Customer ID-> ";
    cin>>id;

    cout<<"\nEnter Customer Name-> ";
    cin>>name;

    cout<<"\nEnter Customer Phone Number-> ";
    cin>>phone;

    cout<<"\nUsage Details:\nTotal Call Time Per Minute-> ";
    cin>>callmin;

    cout<<"\nTotal Message-> ";
    cin>>msgcount;
  }

  void print()
  {
    callbill=outrate*callmin;

    msgbill=msgcharge*msgcount;

    totalbill=callbill+msgbill;

    cout<<"\nBilling Details:\nTotal Call Charge=> "<<callbill<<endl;

    cout<<"\nTotal Message Charge=> "<<msgbill<<endl;

    cout<<"\nTotal Bill=> "<<totalbill<<endl;

   }
};

void main()
{
 clrscr();

 customer c1;
 c1.print();

 getch();
}