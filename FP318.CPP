#include<iostream.h>
#include<conio.h>

class A
{
  int a,b;

  public:

  A(int a,int b)
  {
    this->a=a;  this->b=b;
  }

  void display()
  {
    cout<<"\na => "<<a;
    cout<<"\nb => "<<b;
  }
};

void main()
{
  A a(10,20);
  a.display();

  getch();
}