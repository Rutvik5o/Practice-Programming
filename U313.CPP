#include<iostream.h>
#include<conio.h>

void main()
{
  int x=10;

  int &ref=x;

  ref=20;

  cout<<"X=> "<<x<<endl;

  x=40;

  cout<<"Ref=> "<<ref<<endl;

  getch();
}