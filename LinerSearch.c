#include<stdio.h>
#include<stdlib.h>

int main()
{
     int a[5],i=0,item,j=0;;

     for(j=0;j<5;j++)
     {
        printf("Enter %dth Element On Array-> ",j+1);
        scanf("%d",&a[j]);
     }

     printf("Enter Searching Item-> ");
     scanf("%d",&item);

     while(i<5)
     {
        if(a[i]==item)
        {
            printf("Item Found On Location=>%d ",i+1);
            break;
        }
        i++;
     }
     
     if(i>=5)
     printf("Item will not found");

     return 0;
     
}


