#include<iostream.h>
#include<conio.h>

class employee
{
  int id;
  char name[20];
  float salary;

  protected:

  void ComputePay(int hours)
  {
    salary=600*hours;
  }

  void getdata()
  {
    cout<<"\nEnter Employee ID=> ";
    cin>>id;

    cout<<"\nEnter Employee Name-> ";
    cin>>name;

  }

  void display()
  {
    cout<<endl<<"\nEmployee Details=>\n";

    cout<<"\nEmployee ID=> "<<id;

    cout<<"\nEmployee Name=> "<<name;

    cout<<"\nWeekly Salary Of Employee=> "<<salary;
  }
};

class male:public employee
{
  int hours;

  public:

  void get()
  {
    getdata();

    cout<<"\nEnter Weekly Hours which they worked-> ";
    cin>>hours;

    ComputePay(hours);
  }

  void disp()
  {
     display();
  }
};

class female: public employee
{
  int hours;

  public:

  void get()
  {
    getdata();

    ComputePay(40);
  }

  void disp()
  {
   display();
  }
};

void main()
{
 clrscr();

 male m1;
 female f2;

 m1.get();
 f2.get();

 m1.disp();
 f2.disp();
 getch();
}