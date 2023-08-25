#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *temp,*newnode,*front,*rear;

void enqueue()
{
  newnode=(struct node*)malloc(sizeof(struct node));

  printf("\nEnqueue Data-> ");
  scanf("%d",&newnode->data);

  newnode->next=0;

  if(front==NULL && rear==NULL)
  {
    front=rear=newnode;
  }
  else
  {
    rear->next=newnode;
    rear=newnode;
  }
}

void dequeue()
{
  temp=front;

  if(front==NULL)
  {
    printf("\nQueue=>UnderFlow");
  }
  else
  {
   printf("\nDequeue Data=> %d",temp->data);
   front=front->next;
   free(temp);
  }
}

void peek()
{
  temp=front;

  if(front==NULL)
  {
   printf("\nQueue=>UnderFlow");
  }
  else
  {
   printf("\nFront Data=> %d",front->data);
  }
}

void display()
{
  temp=front;

  if(front==NULL)
  {
   printf("\nQueue=>UnderFlow");
  }
  else
  {
   printf("\nData on Queue=> \n");

   while(temp!=0)
   {
     printf("%d\n",temp->data);
     temp=temp->next;
   }
  }
}

void main()
{
 int choice;

 do
 {
  printf("\nChoose Operation On Queue(LinkList)=>\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
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

  getch();
 }