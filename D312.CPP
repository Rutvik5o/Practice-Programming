#include<iostream.h>
#include<conio.h>

int sum(int a,int b,int c=0,int d=0)
{
  return a+b+c+d;
}

void main()
{
  clrscr();

  cout<<sum(10,15)<<endl;

  cout<<sum(20,25,35)<<endl;

  cout<<sum(50,35,53,53)<<endl;

  getch();
}