// Write a program to find the fibomacci series using recursion.
#include <stdio.h>
#include <time.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    clock_t start = clock();
    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken to calculate Fibonacci series: %f seconds\n", time_taken);
    return 0;
}


// Write a program to find the fibomacci series using iteration.
// #include <stdio.h>
// #include <time.h>

// void fibonacci(int n) {
//     int a = 0, b = 1, next;
//     printf("Fibonacci series up to %d terms:\n", n);
//     for (int i = 0; i < n; i++) {
//         if (i <= 1) {
//             next = i;
//         } else {
//             next = a + b;
//             a = b;
//             b = next;
//         }
//         printf("%d ", next);
//     }
//     printf("\n");
// }