#include <stdio.h>
void sortArray(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void merge(int a[], int n, int b[], int m)
{
    int i, temp;

    for(i = 0; i < n; i++)
    {
        if(a[i] > b[0])
        {
            temp = a[i];
            a[i] = b[0];
            b[0] = temp;
            sortArray(b, m);
        }
    }
}
int main()
{
    int n, m, i;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter sorted elements of first array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);

    int b[m];
    printf("Enter sorted elements of second array:\n");
    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);

    merge(a, n, b, m);

    printf("\nFirst Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nSecond Array: ");
    for(i = 0; i < m; i++)
        printf("%d ", b[i]);

    return 0;
}