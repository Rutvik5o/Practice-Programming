#include<iostream.h>
#include<conio.h>

class student
{
  int roll;
  char name[20];
  float t;
  float sci,maths,en,c,cpp;

  public:

  void get()
  {
    cout<<"\nEnter Student Name-> ";
    cin>>name;

    cout<<"\nEnter Student Roll No-> ";
    cin>>roll;

    cout<<"\nEnter Marks of 5 Subject: ";

    cout<<"\nEnter Science Marks-> ";
    cin>>sci;

    cout<<"\nEnter Maths Marks-> ";
    cin>>maths;

    cout<<"\nEnter English Marks-> ";
    cin>>en;

    cout<<"\nEnter C Marks-> ";
    cin>>c;

    cout<<"\nEnter C++ Marks-> ";
    cin>>cpp;

  }

  void display()
  {
    cout<<"\nStudent Details=> ";

    cout<<"\nName=> "<<name<<endl;

    cout<<"\nRoll No=> "<<roll<<endl;

    cout<<"\nScience Marks=> "<<sci<<endl;

    cout<<"\nMaths Marks=> "<<maths<<endl;

    cout<<"\nEnglish Marks=> "<<en<<endl;

    cout<<"\nC Marks=> "<<c<<endl;

    cout<<"\nC++ Marks=> "<<cpp<<endl;

  }

  void total()
  {
    t=sci+maths+c+cpp+en;
    cout<<"\nTotal Marks=> "<<t<<endl;
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