#include<iostream.h>
#include<conio.h>

class scheme
{
  protected:

  int id;
  char name[20];
  float outrate,msgcharge;

  public:

  void input()
  {
    cout<<"\nEnter Scheme ID-> ";
    cin>>id;

    cout<<"\nEnter Scheme Name-> ";
    cin>>name;

    cout<<"\nEnter Call Going Per Min Rate-> ";
    cin>>outrate;

    cout<<"\nEnter Message Charge Per Message-> ";
    cin>>msgcharge;
  }
};

class customer: public scheme
{
  int id;
  double phoneNumber;
  char name[20];
  float callbill,messagebill,calltime,msgcount,totalbill;

  public:

  customer()
  {
    cout<<"\nEnter Customer ID-> ";
    cin>>id;

    cout<<"\nEnter Customer Name-> ";
    cin>>name;

    cout<<"\nEnter Customer Phone Number-> ";
    cin>>phoneNumber;

    input();

    cout<<"\nUsage Details:\nTotal Call Per Minute-> ";
    cin>>calltime;

    cout<<"\nTotal Message Per Count-> ";
    cin>>msgcount;
  }

  void display()
  {
    callbill=outrate*calltime;

    messagebill=msgcharge*msgcount;

    totalbill=callbill+messagebill;

    cout<<"\nBilling Details:\n1.Call Bill=> "<<callbill;

    cout<<"\n2.Message Bill=> "<<messagebill;

    cout<<"\n\nTotal Bill=> "<<totalbill;
  }
};

void main()
{
  clrscr();

  customer c1;
  c1.display();
  getch();
}