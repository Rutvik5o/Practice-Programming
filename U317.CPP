#include<iostream.h>
#include<conio.h>

class class1
{
  private:
  int no;
  friend void swap();
};

class class2
{
 private:
 int no;
 friend void swap();
};

void swap();

int main()
{
  swap();
  return 0;
}

void swap()
{
  int temp;
  class1 obj1;
  obj1.no=10;

  class2 obj2;
  obj2.no=20;

  cout<<"\nBefore Swapping:\nNumber 1=> "<<obj1.no<<"\nNumber 2=> "<<obj2.no<<endl;

  temp=obj1.no;
  obj1.no=obj2.no;
  obj2.no=temp;

  cout<<"\nAfter Swapping:\nNumber 1=> "<<obj1.no<<"\nNumber 2=> "<<obj2.no<<endl;

  getch();
}