#include<iostream.h>
#include<conio.h>

class employee
{
  int id;
  char name[20];
  float salary;

  protected:

  void ComputePay();

    void ComputePay(int hours)
    {
      salary= 600 * hours;
    }

    void input()
    {
      cout<<"\nEnter Employeee ID-> ";
      cin>>id;

      cout<<"\nEnter Name-> ";
      cin>>name;

    }

    void display()
    {
      cout<<"\nEmployee ID=> "<<id<<endl;
      cout<<"\nEmployee Name=> "<<name<<endl;
      cout<<"\nWeekly Salary=> "<<salary<<endl;
    }
};

class male:public employee
{
  int hours;

  public:

     void salary()
     {
       input();

       cout<<"\nEnter Employee's Are Worked(in hours)-> ";
       cin>>hours;
       ComputePay(hours);

     }

     void output()
     {
       display();
     }
};

class female:public employee
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
  clrscr();
  male m1;
  m1.salary();

  female f1;
  f1.salary();

  cout<<"\nEmployee Details=> \n";

  m1.output();
  f1.output();

  getch();
}