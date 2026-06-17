#include <stdio.h>
void rearrange(int arr[], int n) {
    int pos[n], neg[n];
    int posIndex = 0, negIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            pos[posIndex++] = arr[i];
        } else {
            neg[negIndex++] = arr[i]; 
        }
    }
    int i = 0, j = 0, k = 0;

    while (i < posIndex && j < negIndex) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    while (i < posIndex) {
        arr[k++] = pos[i++];
    }

    while (j < negIndex) {
        arr[k++] = neg[j++];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);    
}
    printf("\n");
}
int main() {
    int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);
    printArray(arr, n);

    return 0;

}