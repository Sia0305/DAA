#include <stdio.h>
#define MAX 100 
int stack[MAX];
int top = -1;
void push(int item) {
    if (top >= MAX - 1) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = item;
        printf("Pushed: %d\n", item);
    }
}
void pop() {
    if (top < 0) 
    {
        printf("Stack underflow\n");
    } else 
    {       
         printf("Popped: %d\n", stack[top--]);
    }
}
void display() {
    if (top < 0) 
    {
        printf("Stack is empty\n");
    } else 
    {      
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
void peep() {
    if (top < 0) 
    {
        printf("Stack is empty\n");
    } else 
    {
        printf("Top element: %d\n", stack[top]);
    }
}
void change(int position, int item) {
    if (position < 1 || position > top + 1) 
    {
        printf("Invalid position\n");
    } else 
    {
        stack[position - 1] = item;
        printf("Changed position %d to %d\n", position, item);
    }
}
int main() {
    int choice, item;
    while (1) {
        printf("1. Push\n2. Pop\n3. Display\n4. Peep\n5. Change\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the item to push: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                 peep();
                break;
            case 5:
                printf("Enter the position to change: ");
                scanf("%d", &item);
                printf("Enter the new item: ");
                scanf("%d", &item);
                change(item, item);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}