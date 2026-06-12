// Write a code to find the power of a number using recursion.

#include <stdio.h>
#include <time.h>

int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}

int main() {
    int base, exp;
    printf("Enter the base and exponent: ");
    scanf("%d %d", &base, &exp);
    clock_t start = clock();
    int result = power(base, exp);
    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("The power of %d raised to %d is: %d\n", base, exp, result);
    printf("Time taken to calculate: %f seconds\n", time_taken);
    return 0;
}

// write a code to find the power of a number using iteration.
// #include <stdio.h>
// #include <time.h>

// int power(int base, int exp) {
//     int result = 1;
//     for (int i = 0; i < exp; i++) {
//         result *= base;
//     }
//     return result;
// }

// int main() {
//     int base, exp;
//     printf("Enter the base and exponent: ");
//     scanf("%d %d", &base, &exp);
//     clock_t start = clock();
//     int result = power(base, exp);
//     clock_t end = clock();
//     double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
//     printf("The power of %d raised to %d is: %d\n", base, exp, result);
//     printf("Time taken to calculate: %f seconds\n", time_taken);
//     return 0;
// }