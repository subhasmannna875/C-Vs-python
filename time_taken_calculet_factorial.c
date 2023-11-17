// factorial_c_recursive.c
#include <stdio.h>
#include <time.h>
long long factorial(int n) {
if (n == 0 || n == 1) {
return 1;
} else {
return n * factorial(n - 1);
}
}
int main() {
int n = 50; // Example: Compute factorial of 20
clock_t start = clock();
long long result = factorial(n);
clock_t end = clock();
printf("Factorial of %d is %lld\n", n, result);
printf("Time taken: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
return 0;
}