#include<iostream.h>
#include<conio.h>

void main()
{
  int a=10;

  cout<<"\nA=> "<<a;

  int &ref=a;

  ref=20;

  cout<<"\nA=> "<<a;

  a=40;

  cout<<"\nRef=> "<<ref;

  getch();
}