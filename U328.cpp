#include<iostream>
using namespace std;

class Publisher
{
    protected:

       char title[20];

       void input()
       {
          cout<<"\nEnter Title Name-> ";
          cin>>title;
       }
};


class Book:public Publisher
{
    int pages;

    public:

    void input()
    {
        Publisher::input();

        cout<<"\nEnter No Of Pages-> ";
        cin>>pages;
    }

    void display()
    {
        cout<<"\nTitle=> "<<title;
        cout<<"\nNo.Of Pages=> "<<pages;
    }
};

class Tape: public Publisher
{
    int time;

    public:

      void input()
      {
          cout<<"\nEnter Play Time(min)-> ";
          cin>>time;
      }

      void display()
      {
        cout<<"\nPlay Time(min)-> "<<time<<endl;
      }
};

int main()
{
    Book b1;
    Tape t1;

    b1.input();
    t1.input();

    cout<<"\nBook Details:=> \n";
    b1.display();
    t1.display();
    return 0;
}