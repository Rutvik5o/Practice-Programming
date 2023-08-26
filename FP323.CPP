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
    cout<<"\nCurrency:\nRupees=> "<<rupees<<"\nPaisa=> "<<paisa;
  }

  friend currency AddCurrency(currency,currency);
};

currency AddCurrency(currency,currency);

void main()
{
  clrscr();
  currency c1(51,49);
  c1.display();

  currency c2(49,51);
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

