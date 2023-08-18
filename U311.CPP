#include<iostream.h>
#include<conio.h>

int area(int);

int area(int,int);

int area(float,int);

void main()
{
  int l,b,r;

  float pi=3.14;

  cout<<"\n1.Enter Side Of Square-> ";
  cin>>l;

  cout<<"\n2.Enter Length & Breath of Rectangle-> ";
  cin>>l>>b;

  cout<<"\n3.Enter Radius Of Circle-> ";
  cin>>r;

  cout<<"->Area of Square=> "<<area(l)<<" Sq.Unit\n";

  cout<<"->Area of Rectangle=> "<<area(l,b)<<" Sq.Unit\n";

  cout<<"->Area of Cirlce=> "<<area(pi,r)<<" Sq.Unit\n";

  getch();
}

int area(int s)
{
  return s*s;
}

int area(int l,int b)
{
  return l*b;
}

int area(float pi,int r)
{
  return pi*r*r;
}