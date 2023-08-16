#include<iostream.h>
#include<conio.h>

class currency
{
  int rupee,paisa;

  public:

  currency() {}

  currency(int r,int p)
  {
    rupee=r;
    paisa=p;
  }

  void display()
  {
    cout<<"\nCurrency=>\nRupee-> "<<rupee<<"\nPaisa->"<<paisa;
  }

  friend currency AddCurrency(currency,currency);
};

currency AddCurrency(currency,currency);

void main()
{

  clrscr();

  currency c1(70,30);

  c1.display();

  currency c2(30,70);

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
