#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert()
{
    struct Node *newNode, *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    printf("Node inserted successfully.\n");
}

void delete()
{
    struct Node *temp, *prev;

    if(head == NULL)
    {
        printf("List is Empty.\n");
        return;
    }

    temp = head;

    if(head->next == NULL)
    {
        printf("Deleted Node = %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    while(temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    printf("Deleted Node = %d\n", temp->data);
    prev->next = NULL;
    free(temp);
}

void display()
{
    struct Node *temp;

    if(head == NULL)
    {
        printf("List is Empty.\n");
        return;
    }

    temp = head;

    printf("\nLinked List:\n");

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    clock_t start, end;
    double cpu_time_used;

    int choice;

    start = clock();

    do
    {
        printf("\n-SINGLY LINKED LIST MENU -\n");
        printf("1. INSERT\n");
        printf("2. DELETE\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nExecution Time = %f seconds\n", cpu_time_used);

    return 0;
}