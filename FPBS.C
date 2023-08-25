#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
 int a[5],lr=0,up=4,mid,i,item,f=0;

 printf("\nEnter item only on Ascending or descending order only");

 for(i=0;i<5;i++)
 {
  printf("\nEnter %dst item-> ",i+1);
  scanf("%d",&a[i]);
 }

 printf("\nEnter Searching item-> ");
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
   printf("\nItem will be found on locaton => %d",mid+1);
 }
 else
 {
  printf("\nSorry, item will be not found");
 }

 getch();
}