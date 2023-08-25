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
   salary=700*hours;
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
    cout<<"\nEmployee ID=> "<<id<<endl;

    cout<<"\nEmployee Name=> "<<name<<endl;

    cout<<"\nWeekly Salary=> "<<salary<<endl;
  }
};

class male: public employee
{
  int hours;

  public:

  void input()
  {
    get();

    cout<<"\nEnter Employee's Worked Hours->";
    cin>>hours;

    ComputePay(hours);
  }

  void output()
  {
    disp();
  }
};

class female: public employee
{
  public:

  void input()
  {
    get();
    ComputePay(40);
  }

  void output()
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

  m1.output();
  f1.output();

  getch();
}