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

  void input()
  {
    cout<<"\nEnter Employee ID-> ";
    cin>>id;

    cout<<"\nEnter Employee Name-> ";
    cin>>name;
  }

  void display()
  {
    cout<<"\nEmployee Details: "<<endl;
    cout<<"\nEmployee ID=> "<<id<<endl;
    cout<<"\nEmployee Name=> "<<name<<endl;
    cout<<"\nWeekly Salary of Employee=> "<<salary<<endl;
  }
};


class male: public employee
{
  int hours;

  public:

  void salary()
  {
    input();

    cout<<"\nEnter Hours Are Worked-> ";
    cin>>hours;

    ComputePay(hours);
  }

  void output()
  {
    display();
  }
};

class female: public employee
{
  public:

  void salary()
  {
    input();

    ComputePay(40);
  }

  void output()
  {
    display();
  }
};

void main()
{
  male m1;
  m1.salary();

  female f2;
  f2.salary();

  cout<<"\nEmployee Details: "<<endl;

  m1.output();
  cout<<"\n";
  f2.output();

  getch();
}