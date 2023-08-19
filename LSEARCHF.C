#include<stdio.h>
#include<conio.h>


void main()
{
  int a[5],i=0,item,j;

  for(j=0;j<5;j++)
  {
    printf("\nEnter %dst Element On Array-> ",j+1);
    scanf("%d",&a[j]);
  }

  printf("\nEnter Searching Element-> ");
  scanf("%d",&item);

  while(i<5)
  {
    if(a[i]==item)
    {
      printf("\nItem Found Location On=> %d",i+1);
      break;
    }
    i++;
  }

  if(i>=5)
  {
  printf("\nItem will not found");
  }

  getch();
  }