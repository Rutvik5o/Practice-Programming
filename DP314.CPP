#include<iostream.h>
#include<conio.h>

class student
{
 int rollno;
 char name[20];
 float t,sci,maths,c,cpp,eng;

 public:

 void get()
 {
   cout<<"\nEnter Student Roll No-> ";
   cin>>rollno;

   cout<<"\nEnter Student Name-> ";
   cin>>name;

   cout<<"\nEnter Student's Marks: \n";

   cout<<"\nScience-> ";
   cin>>sci;

   cout<<"\nMaths-> ";
   cin>>maths;

   cout<<"\nC-> ";
   cin>>c;

   cout<<"\nCPP-> ";
   cin>>cpp;

   cout<<"\nEnglish-> ";
   cin>>eng;
 }

 void display()
 {
   cout<<"\nStudent Details: \n";

   cout<<"\nStudent Roll No=> "<<rollno;

   cout<<"\nStudent Name=> "<<name;

   cout<<"\nScience Mark=> "<<sci;

   cout<<"\nMaths Marks=> "<<maths;

   cout<<"\nC Marks=> "<<c;

   cout<<"\nCPP Marks=> "<<cpp;

   cout<<"\nEnglish Marks=> "<<eng;
 }

 void total()
 {
   t=sci+maths+c+cpp+eng;

   cout<<"\nTotal Marks=> "<<t<<endl;
 }
};

void main()
{
  clrscr();

  student s1;

  s1.get();

  s1.display();

  s1.total();

  getch();f
}