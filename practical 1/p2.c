// Find the sum of the first n natural numbers using a recursive function.

#include <stdio.h>
#include <time.h>

int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    }

    return n + sumOfNaturalNumbers(n - 1);
}
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

     clock_t start = clock();

    int result = sumOfNaturalNumbers(n);

    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC; 
    printf("The sum of the first %d natural numbers is: %d\n", n, result);
    printf("Time taken to calculate: %f seconds\n", time_taken);
}

// Find the sum of the first n natural numbers using a iterative function.

// #include <stdio.h>
// #include <time.h>

// int sumOfNaturalNumbers(int n) {
//     for (int i = 1; i <= n; i++) {
//         n += i;
//     }
//     return n;
// }
// int main(){
//     int n;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     clock_t start = clock();
//     int result = sumOfNaturalNumbers(n);
//     clock_t end = clock();
//     double time_taken = (double)(end - start) / CLOCKS_PER_SEC; 
//     printf("The sum of the first %d natural numbers is: %d\n", n, result);
//     printf("Time taken to calculate: %f seconds\n", time_taken);
// }