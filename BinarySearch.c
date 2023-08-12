#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5],lr=0,up=4,f=0,mid,item,i=0;

    printf("Enter Element On Ascending or Descending Order Only\n");

    for(i=0;i<5;i++)
    {
        printf("Enter %dst Element on Arrayy-> ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter Searching Item-> ");
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
    printf("Item will found on Location=> %d",mid+1);
    else
    printf("Sorry,item will not found");


}