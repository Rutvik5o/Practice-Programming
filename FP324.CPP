#include<iostream.h>
#include<conio.h>

class calender
{
  int day,month,year;

  public:

  calender() {}

  calender(int d,int m ,int y)
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
    cout<<"\nCalender:\nData=> "<<day<<"\nMonth=> "<<month<<"\nYear=> "<<year;
  }
};

void main()
{
  clrscr();

  calender c1(10,2,2020);

  c1.display();

  c1.AddDays(15);

  c1.display();
  getch();
}