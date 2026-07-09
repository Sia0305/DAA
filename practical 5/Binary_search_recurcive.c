#include <stdio.h>
int binarySearch(int arr[], int left, int right, int x) {
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == x)
        return mid;

    if (arr[mid] < x)
        return binarySearch(arr, mid + 1, right, x);
    else
        return binarySearch(arr, left, mid - 1, x);
}
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x; 
    printf("Enter the target element to search: ");
    scanf("%d", &x);

    int result = binarySearch(arr, 0, n-1, x);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in the array.\n");
    return 0;
}
