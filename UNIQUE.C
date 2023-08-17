#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()

{
clrscr();
int i;
textcolor(RED);
textbackground(WHITE);
for(i=1;i<=50;i++);
{
cprintf(" I LIKE YOU ");
delay(50);
}
getch();
}