#include<iostream.h>
#include<conio.h>

class scheme
{
  protected:

  int id;
  char name[20];
  float outrate,msgrate;

  public:

  void get()
  {
    cout<<"\nEnter Scheme ID-> ";
    cin>>id;

    cout<<"\nEnter Scheme Name-> ";
    cin>>name;

    cout<<"\nEnter Call Going Rate Per Min-> ";
    cin>>outrate;

    cout<<"\nEnter Message Charge Per Message-> ";
    cin>>msgrate;
  }
};

class customer:public scheme
{
  int id,calltime,msgcount;
  double pn;
  char name[20];
  float totalbill,callbill,msgbill;

  public:

  customer()
  {
    cout<<"\nEnter Customer ID-> ";
    cin>>id;

    cout<<"\nEnter Customer Name-> ";
    cin>>name;

    cout<<"\nEnter Customer Phone Number-> ";
    cin>>pn;

    get();

    cout<<"\nUsasge Details:\nCall Time(Min)-> ";
    cin>>calltime;
    cout<<"\nTotal Message-> ";
    cin>>msgcount;
  }

  void print()
  {
    callbill=outrate*calltime;

    msgbill=msgrate*msgcount;

    totalbill=callbill+msgbill;

    cout<<"\nBilling Details:\n1.Call Bill=> "<<callbill;
    cout<<"\n2.Message Bill=> "<<msgbill<<endl;
    cout<<"\nTotal Bill=> "<<totalbill;
  }
};

void main()
{
 clrscr();

 customer c1;
 c1.print();
 getch();
}