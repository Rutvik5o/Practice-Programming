#include <iostream>
using namespace std;

class employee
{
    int id;
    char name[50];
    float salary;

    protected:

    void ComputePay(int hours)
    {
        salary = 500 * hours;
    }

    void input()
    {
        cout << "Enter Employee ID-> ";
        cin >> id;

        cout << "Enter Employee Name=> ";
        cin >> name;
    }

    void display()
    {
        cout << "Employee ID=> " << id << endl;
        cout << "Employee Name=> " << name << endl;
        cout << "Weekly Salary Of Employee=> " << salary << endl;
    }
};

class male : public employee
{
    int hours;

public:
    void salary()
    {
        input();
        cout << "Enter the hours that Employee's Worked-> ";
        cin >> hours;

        ComputePay(hours);
    }

    void output()
    {
        display();
    }
};

class female : public employee
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
    female f1;

    cout<<"Employee Details=> \n";

    m1.salary();
    f1.salary();

    m1.output();
    f1.output();

    return 0;
}