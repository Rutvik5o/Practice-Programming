#include<stdio.h>
#include<stdlib.h>
#define N 5

int stack[N];
int top=-1;


void push()
{
  int item;

  if(top==N-1)
  {
    printf("\nStack->OverFlow");
  }
  else
  {
    printf("\nPush Element-> ");
    scanf("%d",&item);

    top++;
    stack[top]=item;
  }
}

void pop()
{
  int item;

  if(top==-1)
  {
    printf("\nStack->UnderFlow");
  }
  else
  {
    item=stack[top];
    top--;

    printf("Pop Item => %d",item);
  }
}

void peek()
{
  if(top==-1)
  {
    printf("\nStack->UnderFlow");
  }
  else
  {
    printf("Top Element => %d",stack[top]);
  }
}

void display()
{
  int i;

  if(top==-1)
  {
    printf("\nStack->UnderFlow");
  }
  else
  {
    printf("Element's On Stack=> \n");

    for(i=top;i>=0;i--)
    {
      printf("%d\n",stack[i]);
    }
  }
}

int main()
{
  int choice;

  do
  {
    printf("\nChoose Operation On Stack(Array)=>\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
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
