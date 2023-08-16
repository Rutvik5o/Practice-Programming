#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head,*newnode,*temp;

void CreateNode()
{
  newnode=(struct node*)malloc(sizeof(struct node));

  printf("Enter The Data-> ");
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

   printf("Enter The Data You Want To Insert At First-> ");
   scanf("%d",&newnode->data);

   newnode->next=head;
   head=newnode;
}

void DeleteAtFirst()
{
  struct node *temp;
  temp=head;
  head=head->next;
  free(temp);
}

void display()
{
  temp=head;

  while(temp!=0)
  {
    printf("%d\n",temp->data);
    temp=temp->next;
  }
}

int main()
{
   int ch;

   do
   {
     printf("\nEnter Choice:\n1.Create Node\n2.Insert At First\n3.Delete At First\n4.Display\n5.Exit\n");
     scanf("%d",&ch);

     switch(ch)
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

       default: printf("Invalid Position");
     }
   }while(ch!=0);

   return 0;
}