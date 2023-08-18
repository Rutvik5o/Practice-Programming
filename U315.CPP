#include<iostream.h>
#include<conio.h>

float power(double m,int n=2);

void main()
{
  int n;
  double m;

  cout<<"\nEnter Number-> ";
  cin>>m;

  cout<<"\nAnswer is=> "<<power(m);

  getch();
}

float power(double m,int n)
{
  float ans;

  for(ans=1;n>0;n--)
      ans=ans*m;

 return ans;
}