#include <stdio.h>
int main() {
    int arr[] = {1, 5, 3, 19, 18, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int minDiff = arr[1] - arr[0];
    for(i = 1; i< n -1; i++)
    {
        int diff = arr[i+1] - arr[i];
        if (diff < minDiff)
        {
            minDiff = diff;
        }
    }
   printf("Minimum Difference = %d\n", minDiff);
}

