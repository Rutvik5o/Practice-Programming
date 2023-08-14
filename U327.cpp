#include<iostream>
using namespace std;

class scheme
{
    protected:

     int id;
     float outrate,msgcharge;
     char name[10];

    public:

       void getdata()
       {
          cout<<"\nScheme Details->\n";

          cout<<"Enter Scheme Id-> ";
          cin>>id;

          cout<<"Enter Scheme Name-> ";
          cin>>name;

          cout<<"Enter call outgoing rate per minute-> Rs.";
          cin>>outrate;

          cout<<"Enter message charge per minute-> Rs.";
          cin>>msgcharge;
       }
};

class customer: public scheme
{
    int id,calltime,msgcout,phone;
    char name[10];
    float callbill,msgbill,totalbill;

    public:

      customer()
      {
          cout<<"\nCustomer Details-> ";

          cout<<"\nEnter Customer ID-> ";
          cin>>id;

          cout<<"\nEnter Customer Name-> ";
          cin>>name;

          cout<<"\nEnter Customer Phone Number-> ";
          cin>>phone;

          getdata();

          cout<<"\n->Usage Details->\nTotal Call Time(min)=";
          cin>>calltime;

          cout<<"\nTotal Message=";
          cin>>msgbill;
      }

      void print()
    
     {
          callbill=outrate*calltime;
          msgbill=msgcharge*msgbill;
          totalbill=callbill+msgbill;


          cout<<"\nBilling Details=>:\n";
          cout<<"1.Call Bill=>Rs."<<callbill<<endl;
          cout<<"2.Message Bill=>Rs."<<msgbill<<endl;

          cout<<"=>Total Bill=Rs."<<totalbill;
      }
};

int main()
{
    customer c1;
    c1.print();
    return 0;

}
