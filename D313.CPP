#include<iostream.h>
#include<conio.h>

void main()
{
  int a=20;


  cout<<"\na=> "<<a;

  int &ref=a;

  ref=40;

  cout<<"\na=> "<<a;

  a=60;

  cout<<"\nref=> "<<ref;

  getch();
}