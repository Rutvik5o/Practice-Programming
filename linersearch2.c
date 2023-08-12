#include<stdio.h>
#include<stdlib.h>

int main()
{
     int a[5],i=0,j=0,item;


     for(j=0;j<5;j++)
     {
        printf("Enter %dth Element on Array-> ",j+1);
        scanf("%d",&a[j]);
     }

     printf("Enter seaching element-> ");
     scanf("%d",&item);

     while(i<5)
     {
        if(a[i]==item)
        {
            printf("Item found on Location=> %d",i+1);
            break;
        }
        i++;
     }

     if(i>=5)
         printf("Item will not found");

     return 0;
}