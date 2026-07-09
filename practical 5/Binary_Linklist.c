// Write a program to implement binary search algorithm using linked list and recursive method. 

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createLinkedList(int arr[], int n) {
    struct Node* head = NULL;
    struct Node* tail = NULL;
    for (int i = 0; i < n; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}
int binarySearchLinkedList(struct Node* head, int left, int right, int x) {
    if (left > right)
        return -1;

    struct Node* midNode = head;
    for (int i = 0; i < (left + right) / 2; i++) {
        midNode = midNode->next;
    }

    if (midNode->data == x)
        return (left + right) / 2;

    if (midNode->data < x)
        return binarySearchLinkedList(midNode->next, (left + right) / 2 + 1, right, x);
    else
        return binarySearchLinkedList(head, left, (left + right) / 2 - 1, x);
}

int main() {
    int n;
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter element to search: ");
    scanf("%d", &x);

    struct Node* head = createLinkedList(arr, n);
    int result = binarySearchLinkedList(head, 0, n - 1, x);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in the array.\n");

    return 0;
}