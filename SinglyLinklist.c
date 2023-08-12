#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *newnode = NULL, *temp = NULL;

void createnode()
{
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data -> ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
}

void InsertatFirst()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data at beginning -> ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;
}

void display()
{
    temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void DeleteAtFirst()
{
    if (head == NULL)
    {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    temp = head;
    head = head->next;
    free(temp);
}

int main()
{
    int ch = 1;

    do
    {
        printf("Enter Choice->\n1.Create Node\n2.Display\n3.Insert at First\n4.Delete at First\n0.Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1: createnode();
                break;

            case 2: display();
                break;

            case 3: InsertatFirst();
                break;

            case 4: DeleteAtFirst();
                break;

            case 0: printf("Exiting...\n");
                break;

            default: printf("Invalid Choice\n");
        }
    } while (ch != 0);

    // Free any remaining allocated memory
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
