#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
  int a[5],item,j=0,i;

  for(i=0;i<5;i++)
  {
    printf("\nEnter %dst Element-> ",i+1);
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
    printf("\nSorry,item will be not found");
  }

  getch();
}