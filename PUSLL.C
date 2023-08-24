#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *temp, *newnode, *head;

void CreateNode()
{
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter Data-> ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if (head == NULL)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
}

void InsertAtFirst()
{
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter Data At First-> ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;
}

void InsertAtGivenPosition()
{
    int i = 1, pos;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter The Data which you want to insert at given position-> ");
    scanf("%d", &newnode->data);

    printf("\nEnter the position you want to insert data-> ");
    scanf("%d", &pos);

    temp = head;

    while (i < pos - 1 && temp != NULL)  // Added condition to check for NULL
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)  // Handle case when the position is out of bounds
    {
        printf("Invalid position.\n");
        free(newnode);
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void DeleteAtFirst()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    temp = head;

    printf("\nDeleted Data=> %d", temp->data);

    head = head->next;

    free(temp);
}

void display()
{
    temp = head;

    if (temp == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("\nData On LinkList-> \n");

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int choice;

    do
    {
        printf("\nChoose Operation On LinkList=>\n1.Create Node\n2.Insert At First\n3.Insert At Given Position\n4.Delete At First\n5.Display\n6.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: CreateNode();
                    break;

            case 2: InsertAtFirst();
                    break;

            case 3: InsertAtGivenPosition();
                    break;

            case 4: DeleteAtFirst();
                    break;

            case 5: display();
                    break;

            case 6: exit(0);

            default: printf("Invalid Operation");
        }
    } while (choice != 6);

    return 0;
}
