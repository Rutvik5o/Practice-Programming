#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

  struct node *top=0,*temp;


void push()
{
    struct node *newnode;

    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter The Element Which You Want To Insert On Stack-> ");
    scanf("%d",&newnode->data);

    newnode->next=top;

    top=newnode;

}

void pop()
{
   temp=top;

   if(top==0)
   {
     printf("\nStack->UnderFlow\n");
   }
   else
   {
     printf("Popped Element=> %d",top->data);

     top=top->next;

     free(temp);
   }
}

void peek()
{
  temp=top;

  if(temp==0)
  {
    printf("Stack->UnderFlow");
  }
  else
  {
   printf("Top Element is=> %d",top->data);
  }
}

void display()
{
  temp=top;

  if(top==0)
  {
    printf("Stack->UnderFlow");
  }
  else
  {
   while(temp!=0)
   {
    printf("%d\n",temp->data);
    temp=temp->next;
   }
  }
}

int main()
{
 int choice;

 do
 {
   printf("\nChoose Operation On Stack\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
   scanf("%d",&choice);

   switch(choice)
   {
     case 1: push();
	     break;

     case 2: pop();
	     break;

     case 3: peek();
	     break;

     case 4: display();
	     break;

     case 5: exit(0);

     default: printf("Invalid Operation");
    }
 }while(choice!=0);

 return 0;
}
