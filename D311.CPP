#include<iostream.h>
#include<conio.h>

int area(int);

int area(int,int);

float area(float,int);

void main()
{
  int l,b,r;
  float pi=3.14;

  cout<<"\nEnter Length Of Sqaure-> ";
  cin>>l;

  cout<<"\nEnter Length And Radius Of Reactangle-> ";
  cin>>l>>b;

  cout<<"\nEnter Radius Of Circle-> ";
  cin>>r;

  cout<<"\nArea of Square=> "<<area(l)<<endl;

  cout<<"\nArea of Rectangle=> "<<area(l,b)<<endl;

  cout<<"\nArea of Circle=> "<<area(pi,r)<<endl;

  getch();
}

int area(int l)
{
 return l*l;
}

int area(int l,int b)
{
  return l*b;
}
float area(float pi,int r)
{
 return pi*r*r;
}