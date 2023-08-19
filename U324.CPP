#include<iostream.h>
#include<conio.h>

class calender
{
  int day,month,year;

  public:

  calender() {}

  calender(int d,int m,int y)
  {
    day=d;
    month=m;
    year=y;
  }

  void AddDays(int d)
  {
   day+=d;
  }

  void display()
  {
   cout<<"\nDate=> "<<day<<"/"<<month<<"/"<<year;
  }
};

void main()
{
  calender c1(15,06,2023);
  c1.display();
  c1.AddDays(10);
  c1.display();
  getch();
}