#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

struct node *newnode,*temp,*front=NULL,*rear=NULL;


void enqueue()
{

  newnode=(struct node*)malloc(sizeof(struct node));

  printf("Enqueueing Data-> ");
  scanf("%d",&newnode->data);

  newnode->next=0;

  if( front == 0 && rear == 0)
  {
    front = rear= newnode;
  }
  else
  {
    rear->next=newnode;
    rear=newnode;
  }
}

void dequeue()
{
  if( front == 0 && rear == 0)
  {
    printf("Queue->UnderFlow\n");
  }
  else
  {
    temp=front;
    printf("Dequeueing Element => %d\n",temp->data);
    front=front->next;
    free(temp);
  }
}

void peek()
{
  if(front == 0)
  {
    printf("Queue->UnderFlow\n");
  }
  else
  {
    printf("Front Element => %d\n",front->data);
  }
}

void display()
{
  if( front == 0 && rear == 0)
  {
   printf("Queue->UnderFlow\n");
  }
  else
  {
    temp=front;

    printf("Queue in Element's => \n");

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
    printf("Choose Operation On Queue=>\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
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


