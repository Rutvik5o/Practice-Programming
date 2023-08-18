#include<iostream.h>
#include<conio.h>

int a=10;

void main()
{
 a=20;

 cout<<"\nLocal Variable A => "<<a<<endl;

 std:cout<<"\nGlobal Varibale A=> "<<::a<<endl;

 getch();
}