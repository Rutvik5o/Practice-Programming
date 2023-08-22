#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
  int roll;
  char name[50];

  public:

  void get()
  {
    cout<<"\nEnter Name-> ";
    cin>>name;

    cout<<"\nEnter roll-> ";
    cin>>roll;

    this->roll=roll;

    strcpy(this->name,name);
  }

  void display()
  {
     cout<<"\Name=> "<<name<<" & "<<"Roll=> "<<roll;
  }

};

void main()
{
  clrscr();
  int no;
  char name[50];

  student s1;
  s1.get();
  s1.display();
  getch();
}