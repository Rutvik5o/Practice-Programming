#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
  clrscr();

  int a[5],i=0,j=0,item;

  for(i=0;i<5;i++)
  {
   printf("\nEnter %dst Value-> ",i+1);
   scanf("%d",&a[i]);
  }

  printf("\nEnter Searching Item-> ");
  scanf("%d",&item);

  while(j<5)
  {
    if(a[j]==item)
    {
      printf("\nItem will be found on location=> %d",j+1);
      break;
    }
    j++;

  }

  if(j>5)
  {
    printf("\nSorry, item will be not found");
  }

  getch();
}