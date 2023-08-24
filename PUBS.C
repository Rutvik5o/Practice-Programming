#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
  clrscr();

  int a[5],i=0,j=0,lr=0,up=4,mid,item,f=0;

  printf("\nEnter Number Only On Ascending Or Descending Order Only");

  for(i=0;i<5;i++)
  {
    printf("\nEnter %dst Element-> ",i+1);
    scanf("%d",&a[i]);
  }

  printf("\nEnter Searching Item-> ");
  scanf("%d",&item);

  while(lr<=up)
  {
    mid=(lr+up)/2;

    if(a[mid]==item)
    {
      f=1;
      break;
    }

    if(a[mid]<item)
    {
      lr=mid+1;
    }
    else
    {
     up=mid-1;
    }
  }

if(f==1)
{
  printf("\nItem will be found on location=> %d",mid+1);
}
else
{
 printf("\nSorry,item will be not found");
}

getch();
}