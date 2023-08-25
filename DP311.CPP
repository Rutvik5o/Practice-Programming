#include<iostream.h>
#include<conio.h>

int area(int);

int area(int,int);

float area(float,int);

void main()
{
  int l,b,r;

  float pi=3.10;

  cout<<"\nEnter Side of Square-> ";
  cin>>l;

  cout<<"\nEnter Side of Rectangle-> ";
  cin>>l>>b;

  cout<<"\nEnter Side of Circle-> ";
  cin>>r;

  cout<<"\nArea Of Square=> "<<area(l)<<endl;

  cout<<"\nArea of Rectangle=> "<<area(l,b)<<endl;

  cout<<"\nArea of Circle=> "<<area(pi,r)<<endl;

  getch();
}

int area(int l)
{
  return l*l;
}

int area(int l, int b)
{
  return l*b;
}

float area(float pi,int a)
{
  return pi*a*a;
}