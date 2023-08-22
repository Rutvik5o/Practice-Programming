#include<iostream.h>
#include<conio.h>

int a=10;

void main()
{
  clrscr();

  int a=50;

  cout<<"a=> "<<a;

  cout<<"\nglobal a=> "<<::a;

  getch();
}