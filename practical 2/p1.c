#include <stdio.h>
#include <time.h>

#define MAX 100
int stack[MAX];
int top = -1;
void push()
{
    int value;
    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &value);

    top++;
    stack[top] = value;

    printf("Element inserted successfully.\n");
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Deleted Element = %d\n", stack[top]);
    top--;
}

void peep()
{
    int pos;

    if(top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Enter position from top: ");
    scanf("%d", &pos);

    if(pos <= 0 || pos > top + 1)
    {
        printf("Invalid Position\n");
        return;
    }

    printf("Element = %d\n", stack[top - pos + 1]);
}

void change()
{
    int pos, value;

    if(top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Enter position from top: ");
    scanf("%d", &pos);

    if(pos <= 0 || pos > top + 1)
    {
        printf("Invalid Position\n");
        return;
    }

    printf("Enter new value: ");
    scanf("%d", &value);

    stack[top - pos + 1] = value;

    printf("Value changed successfully.\n");
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("\nStack Elements:\n");

    for(i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main()
{
    clock_t start, end;
    double cpu_time_used;

    int choice;

    start = clock();

    do
    {
        printf("\n- STACK MENU -\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEP\n");
        printf("4. CHANGE\n");
        printf("5. DISPLAY\n");
        printf("6. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peep();
                break;

            case 4:
                change();
                break;

            case 5:
                display();
                break;

            case 6:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 6);

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nExecution Time = %f seconds\n", cpu_time_used);

    return 0;
}