#include<iostream.h>
#include<conio.h>

int a=10;

void main()
{
  int a=50;

  cout<<"\nLocal Variale=> "<<a;

  cout<<"\nGlobal Variable=> "<<::a;

  getch();
