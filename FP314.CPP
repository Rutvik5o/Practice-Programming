#include<iostream.h>
#include<conio.h>

class student
{
  int id;
  char name[20];
  float t,sci,maths,eng,c,cpp;

  public:

  void get()
  {
    cout<<"\nEnter Student ID-> ";
    cin>>id;

    cout<<"\nEnter Student Name-> ";
    cin>>name;

    cout<<"\nEnter Student Marks: ";

    cout<<"\nScience-> ";
    cin>>sci;

    cout<<"\nMaths-> ";
    cin>>maths;

    cout<<"\nEnglish-> ";
    cin>>eng;

    cout<<"\nC-> ";
    cin>>c;

    cout<<"\nCPP-> ";
    cin>>cpp;
  }

  void display()
  {
    cout<<"\nStudent ID=> "<<id;

    cout<<"\nStudent Name=> "<<name;

    cout<<"\nStudent Marks: ";

    cout<<"\nScience=> "<<sci;

    cout<<"\nMaths=> "<<maths;

    cout<<"\nEnglish=> "<<eng;

    cout<<"\nC=> "<<c;

    cout<<"\nCPP=> "<<cpp;
  }

  void total()
  {
    t=(sci+maths+eng+c+cpp);

    cout<<"\nTotal Marks=> "<<t;

  }

};

void main()
{
  student s1;
  s1.get();
  s1.display();
  s1.total();
  getch();
}