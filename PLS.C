#include<stdio.h>
#include<conio.h>
#include<stdio.h>

void main()
{
  int a[5],i=0,item,j;

  for(j=0;j<5;j++)
  {
    printf("\nEnter %dst Number-> ",j+1);
    scanf("%d",&a[j]);
  }

  printf("\nEnter Searching Item-> ");
  scanf("%d",&item);

  while(i<5)
  {
    if(a[i]==item)
    {
      printf("\nItem will be found on location =>%d",i+1);
      break;
    }
    i++;
  }

  if(i>=5)
  {
   printf("Sorry, item will be not found");
  }

  getch();
}