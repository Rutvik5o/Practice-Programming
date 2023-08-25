#include<iostream.h>
#include<conio.h>

float power(double m,int n=2);

void main()
{
  clrscr();

  double m;
  int n;

  cout<<"\nEnter Value-> ";
  cin>>m;

  cout<<"\nAnswer => "<<power(m)<<endl;

  getch();
}

float power(double m,int n)
{
  int ans;

  for(ans=1;n>0;n--)
  {
    ans=ans*m;
  }

  return ans;
}