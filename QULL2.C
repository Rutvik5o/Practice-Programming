#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

struct node *front=NULL,*rear=NULL,*newnode,*temp;

void enqueue()
{
  newnode=(struct node*)malloc(sizeof(struct node));

  printf("Enqueue Data-> ");
  scanf("%d",&newnode->data);

  newnode->next=0;

  if(front == 0)
  {
    front = rear = newnode;
  }
  else
  {
    rear->next=newnode;
    rear=newnode;
  }
}

void dequeue()
{
 if(front == NULL)
 {
  printf("\nQueue->UnderFlow\n");
 }
 else
 {
   temp=front;
   printf("Dequeue Element -> %d",front->data);
   front=front->next;
   free(temp);
 }
}

void peek()
{
  if(front==NULL&&rear==NULL)
  {
   printf("\nQueue->UnderFlow\n");
  }
  else
  {
    printf("Front Element =>%d\n",front->data);
  }
}

void display()
{
  if (front == NULL)
  {
   printf("\nQueue->UnderFlow\n");
  }
  else
  {
    temp=front;

    printf("Element's On Queue=> \n");

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
   printf("\nChoose Operation On Queue=>\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
   scanf("%d",&choice);

   switch(choice)
   {
      case 1: enqueue();
	      break;

      case 2: dequeue();
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
