// #include<stdio.h>
// #define MAX 100
// int queue[MAX];
// int front = -1, rear = -1;
// void enqueue(int item) {
//     if (rear >= MAX - 1) {
//         printf("Queue overflow\n");
//     } else {
//         if (front == -1) {
//             front = 0;
//         }
//         queue[++rear] = item;
//         printf("Enqueued: %d\n", item);
//     }
// }
// void dequeue() {
//     if (front == -1 || front > rear) {
//         printf("Queue underflow\n");        
//     } else {
//         printf("Dequeued: %d\n", queue[front++]);
//         if (front > rear) {
//             front = rear = -1; 
//         }
//     }
// }
// void display() {
//     if (front == -1) {
//         printf("Queue is empty\n");
//     } else {
//         printf("Queue elements: ");
//         for (int i = front; i <= rear; i++) {   
//             printf("%d ", queue[i]);
//         }
//         printf("\n");
//     }
// }
// int main() {
//     int choice, item;
//     while (1) {
//         printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch (choice) {   
//             case 1:
//                 printf("Enter item to enqueue: ");
//                 scanf("%d", &item);
//                 enqueue(item);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 return 0;
//             default:
//                 printf("Invalid choice\n");
//         }
//     }
//     return 0;
// }

#include<stdio.h>
#define Max 10
int q[Max];
int front=-1;
int rear=-1;

void enque(int item)
{
    if(rear==Max-1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        q[rear]=item;
        printf("Enqueued: %d\n", item);
    }
}
void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("Queue underflow\n");
    }
    else
    {
        printf("Dequeued: %d\n", q[front]);
        front++;
        if(front>rear)
        {
            front=rear=-1;
        }
    }
}
void display()
{
    if(front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("Queue elements: ");
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",q[i]);
        }
        printf("\n");
    }
}
void main()
{
    enque(10);
    enque(20);
    enque(30);
    display();
    dequeue();
    display();
}