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
    cout<<"\nDate=> "<<day<<"\nMonth=> "<<month<<"\nYear=> "<<year<<endl;
  }
};

void main()
{
  clrscr();

  calender c1(10,2,2023);

  c1.display();

  c1.AddDays(20);

  c1.display();

  getch();
}