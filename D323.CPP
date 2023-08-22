#include<iostream.h>
#include<conio.h>

class currency
{
  int rupees,paisa;

  public:

  currency() {}

  currency(int r,int p)
  {
    rupees=r;
    paisa=p;
  }

  void display()
  {
    cout<<"\nCurrency: \n"<<"Rupees=> "<<rupees<<"\nPaisa=> "<<paisa;
  }
  friend currency AddCurrency(currency,currency);
};

currency AddCurrency(currency,currency);

void main()
{
  clrscr();
  currency c1(10,20);
  c1.display();

  currency c2(20,10);
  c2.display();

  currency c3=AddCurrency(c1,c2);
  c3.display();

  getch();
}

currency AddCurrency(currency a,currency b)
{
  currency c;
  c.rupees=a.rupees+b.rupees;
  c.paisa=a.paisa+b.paisa;
}

