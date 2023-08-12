#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5],lr=0,up=4,f=0,item,mid,i=0;

    printf("Enter Element only Ascening or Descending Order only\n");

    for(i=0;i<5;i++)
    {
        printf("Enter %dst element on array-> ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter Searching Element-> ");
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
        lr=mid+1;
        else 
        up=mid-1;

    }

    if(f==1)
    printf("Item found on location-> %d",mid+1);
}