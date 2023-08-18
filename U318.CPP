#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
  int roll;
  char name[20];

  public:

  void get()
  {
    cout<<"\nEnter Student Name-> ";
    cin>>name;

    cout<<"\nEnter Roll No-> ";
    cin>>roll;

    this->roll=roll;
    strcpy(this->name,name);
  }

  void display()
  {
    cout<<"\nName=> "<<name<<endl;
    cout<<"\nRoll No=> "<<roll<<endl;
  }
};

void main()
{
  student s1;
  int roll;
  char name[20];
  s1.get();
  s1.display();
  getch();
}
