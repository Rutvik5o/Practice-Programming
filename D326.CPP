#include<iostream.h>
#include<conio.h>

class employee
{
  int id;
  char name[20];
  float salary;

  protected:

  void input()
  {
    cout<<"\nEnter Employee ID-> ";
    cin>>id;

    cout<<"\nEnter Employee Name-> ";
    cin>>name;
  }

  void ComputePay(int hours)
  {
    salary=600*hours;
  }

  void display()
  {
   cout<<"\nEmployee ID=> "<<id;
   cout<<"\nEmployee Name=> "<<name;
   cout<<"\nWeekly Salary=> "<<salary;
  }
};

class male: public employee
{
  int hours;

  public:

  void get()
  {
    input();

    cout<<"\nEnter Hours Of they worked-> ";
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
  public:

  void get()
  {
    input();

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
  female f1;

  m1.get();
  f1.get();

  cout<<"\nEmployee Details:\n"<<endl;

  m1.disp();
  f1.disp();

  getch();
}