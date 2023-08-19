#include<iostream.h>
#include<conio.h>

class currency
{

  int rupee,paisa;

  public:

  currency() {}

  currency(int r, int p)
  {
    rupee=r;
    paisa=p;
  }

  void display()
  {
   cout<<"\nCurrency:\nRupee=> "<<rupee<<" & "<<"Paisa=> "<<paisa;
  }

  friend currency AddCurrency(currency,currency);
};

currency Addcurrency(currency,currency);

void main()
{

  currency c1(49,51);
  c1.display();

  currency c2(51,49);
  c2.display();

  currency c3=AddCurrency(c1,c2);
  c3.display();

  getch();
}

currency AddCurrency(currency a,currency b)
{
  currency c;
  c.rupee=a.rupee+b.rupee;
  c.paisa=a.paisa+b.paisa;
}