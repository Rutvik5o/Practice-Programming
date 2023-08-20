#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
  int data;
  struct node *next;
};

struct node *temp,*newnode,*head;


void CreateNode()
{
  newnode=(struct node*)malloc(sizeof(struct node));

  printf("\nEnter Data-> ");
  scanf("%d",&newnode->data);

  newnode->next=0;

  if(head==0)
  {
    head=temp=newnode;
  }
  else
  {
   temp->next=newnode;
   temp=newnode;
  }
}

void InsertAtFirst()
{
  newnode=(struct node*)malloc(sizeof(struct node));

  printf("\nEnter Data At First Node-> ");
  scanf("%d",&newnode->data);

  newnode->next=head;
  head=newnode;
}

void DeleteAtFirst()
{
  temp=head;
  printf("\nDeleted Element=> %d",temp->data);
  head=head->next;
  free(temp);
}

void display()
{
  temp=head;

  printf("\nData In LinkList=> \n");

  while(temp!=0)
  {
    printf("%d\n",temp->data);
    temp=temp->next;
  }
}

void main()
{
  int choice;

  do
  {
    printf("\nChoose Operation On Singly LinkList=>\n1.Create a Node\n2.Insert At First\n3.Delete At First\n4.Display\n5.Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
      case 1: CreateNode();
	      break;

      case 2: InsertAtFirst();
	      break;

      case 3: DeleteAtFirst();
	      break;

      case 4: display();
	      break;

      case 5: exit(0);

      default: printf("Invalid Operation");

    }

  }while(choice!=0);

  getch();
}