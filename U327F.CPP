#include<iostream.h>
#include<conio.h>

class scheme
{
  protected:

  int id;
  float outrate,msgcharge;
  char name[10];

  public:

  void getdata()
  {

   cout<<"\nScheme Details:\n";

   cout<<"\nEnter Scheme ID-> ";
   cin>>id;

   cout<<"\nEnter Scheme Name-> ";
   cin>>name;

   cout<<"\nEnter call otugoing rate per minute-> ";
   cin>>outrate;

   cout<<"\nEnter message charge per message-> ";
   cin>>msgcharge;
  }
};

class customer: public scheme
{
   int id,calltime,msgcount,phone;
   char name[20];
   float callbill,msgbill,totalbill;

  publ
  ic:

  customer()
  {
    cout<<"\n->Customer Details-> ";

    cout<<"\nEnter Customer ID-> ";
    cin>>id;

    cout<<"\nEnter Customer Name-> ";
    cin>>name;

    cout<<"\nEnter Customer Phone Number-> ";
    cin>>phone;

    getdata();

    cout<<"\n->Usage Details:\nTotal Call Time(Min)-> ";
    cin>>calltime;

    cout<<"\nTotal Message-> ";
    cin>>msgcount;

  }

  void print()
  {
    callbill=outrate*calltime;
    msgbill=msgcount*msgcharge;

    totalbill=callbill+msgbill;

    cout<<"\nBilling Details:\n";
    cout<<"\n1.Call Bill=>Rs. "<<callbill<<endl;
    cout<<"\n2.Message Bill=>Rs. "<<msgbill<<endl;

    cout<<"->Total Bill=>Rs. "<<totalbill;
  }
};

void main()
{
  clrscr();
  customer c1;
  c1.print();
  getch();
}