#include <stdio.h>
#include <time.h>

#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void insert()
{
    int value;

    if(rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    if(front == -1)
        front = 0;

    rear++;
    queue[rear] = value;

    printf("Element inserted successfully.\n");
}

void delete()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted Element = %d\n", queue[front]);
    front++;

    if(front > rear)
    {
        front = -1;
        rear = -1;
    }
}

void display()
{
    int i;

    if(front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("\nQueue Elements:\n");

    for(i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    printf("\n");
}

int main()
{
    clock_t start, end;
    double cpu_time_used;

    int choice;

    start = clock();

    do
    {
        printf("\n- QUEUE MENU -\n");
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