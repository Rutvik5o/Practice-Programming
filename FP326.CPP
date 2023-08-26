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
    salary=650*hours;
  }

  void get()
  {
   cout<<"\nEnter Employee ID-> ";
   cin>>id;

   cout<<"\nEnter Employee Name-> ";
   cin>>name;
  }

  void disp()
  {
    cout<<"\nEmployee ID=> "<<id;

    cout<<"\nEmployee Name=> "<<name;

    cout<<"\nWeekly Salary=> "<<salary;
  }
};

class male:public employee
{
  int hours;

  public:

  void input()
  {
    get();

    cout<<"\nEnter Worked Hours-> ";
    cin>>hours;

    ComputePay(hours);
  }

  void display()
  {
    disp();
  }
};

class female:public employee
{
  public:

  void input()
  {
    get();

    ComputePay(40);
  }

  void display()
  {
    disp();
  }
};

void main()
{
  clrscr();

  male m1;
  female f1;

  m1.input();
  f1.input();

  m1.display();
  f1.display();

  getch();
}

