#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class c1
{
  int a,b;

  public:

  c1(int a,int b)
  {
    this->a=a;  this->b=b;
  }

  void display()
  {
    cout<<"\nA=> "<<a<<"\nB=> "<<b;
  }

};

void main()
{
  c1 one(10,20);
  one.display();

  getch();
}