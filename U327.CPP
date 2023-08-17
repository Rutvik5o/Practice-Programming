#include<iostream.h>
#include<conio.h>

class scheme
{
  protected:

    int id;
    int outrate,msgcharge;
    char name[10];

  public:

   void getdata()
   {
     cout<<"\nScheme Details=> \n";

     cout<<"\nEnter Scheme ID-> ";
     cin>>id;

     cout<<"\nEnter Scheme Name-> ";
     cin>>name;

     cout<<"\nEnter outgoing rate per minute->Rs. ";
     cin>>outrate;

     cout<<"\nEnter message charge per minute->Rs. ";
     cin>>msgcharge;
   }
};

class customer:public scheme
{
  int id,phone_no,calltime,msgcount;
  char name[20];
  float callbill,msgbill,totalbill;

  public:

    customer()
    {
       cout<<"\nCustomer Details=> ";

       cout<<"\nEnter Customer ID-> ";
       cin>>id;

       cout<<"\nEnter Customer Name-> ";
       cin>>name;

       cout<<"\nEnter Customer's Phone Number-> ";
       cin>>phone_no;

       getdata();

       cout<<"\n->Usage Details:\n1.Total Call Time(Min)-> ";
       cin>>calltime;

       cout<<"\n2.Total Message-> ";
       cin>>msgcount;

    }

    void print()
    {
      callbill=outrate*calltime;
      msgbill=msgcharge*msgcount;
      totalbill=callbill+msgbill;

      cout<<"\n->Billing Details: \n";
      cout<<"\n1.Call Bill=>Rs. "<<callbill<<endl;
      cout<<"\n2.Message Bill=>Rs. "<<msgbill<<endl;

      cout<<"\nTotal Bill=>Rs. "<<totalbill<<endl;

    }
};

void main()
{
  clrscr();
  customer c1;
  c1.print();
  getch();
}
