#include<stdio.h>
#include<conio.h>

void main()
{
  int a[5],lr=0,up=4,i=0,item,mid,f=0;

  printf("\nEnter Element Only Asceding Or Descending Order-> ");

  for(i=0;i<5;i++)
  {
    printf("\nEnter %d Element-> ",i+1);
    scanf("%d",&a[i]);
  }

  printf("\nEnter Searching Item-> ");
  scanf("%d",&item);

  while(lr<=up)
  {
    mid=(up+lr)/2;

    if(a[mid]==item)
    {
      f=1;
      break;
    }

    if(a[mid]<item)
    lr=mid+1;
    else
    up=mid-1;
  }

  if(f==1)
  printf("\nItem will be found on location=> %d",mid+1);
  else
  printf("\nSorry item will not found");
  getch();
}