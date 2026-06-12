// Write a program to find the factorial of a number using recursion.
#include <stdio.h>
#include<time.h>

long long factorial(int n) {
 
    if (n == 0 || n == 1) {
        return 1; 
    }
    return n * factorial(n - 1); 


}  

int main() {
    clock_t start, end;
    long long number;
    printf("Enter a positive integer: ");
    scanf("%lld", &number);
    
    start = clock();
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        long long result = factorial(number);
        printf("Factorial of %lld is %lld\n", number, result);
    }
    end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken to calculate factorial of %lld: %f seconds\n", number, time_taken);

    return 0;
}


// Write a program to find the factorial of a number using iteration.
// #include <stdio.h>
// #include<time.h>

// long long factorial(int n) {
//     long long result = 1;
//     for (int i = 2; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }

// int main() {
//     clock_t start, end;
//     long long number;
//     printf("Enter a positive integer: ");
//     scanf("%lld", &number);
    
//     start = clock();
//     if (number < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//     } else {
//         long long result = factorial(number);
//         printf("Factorial of %lld is %lld\n", number, result);
//     }
//     end = clock();
//     double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
//     printf("Time taken to calculate factorial of %lld: %f seconds\n", number, time_taken);

//     return 0;
// }


