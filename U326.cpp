#include<iostream>
using namespace std;

class employee
{
    int id;
    char name[50];
    float salary;

    protected:

       void ComputePay(int hours)
       {
            salary=500*hours;
       }

       void input()
       {
         cout<<"Enter Employee ID-> ";
         cin>>id;

         cout<<"Enter Employee Name-> ";
         cin>>name;
       }

       void display()
       {
           cout<<"Employee ID=> "<<id<<endl;
           cout<<"Employee Name=> "<<name<<endl;
           cout<<"Weekly Salary of Employee=>Rs."<<salary<<endl;
       }
};

class male:public employee
{
    int hours;

    public:

    void salary()
    {
        input();
        cout<<"Enter the Hours that which worked by Employee-> ";
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

int main()
{
    male m1;
    m1.salary();

    female f1;
    f1.salary();

    cout<<"\nEmployee Details=> \n";

    m1.output();
    cout<<endl;
    f1.output();
    cout<<endl;

    return 0;
}
