// factorial calculation using c code
#include <stdio.h>
int factorial(int n);
int main() {
int n = 10;
printf("Factorial of %d is %d\n", n, factorial(n));
return 0;
}
// defining factorial function
int factorial(int n)
{
if (n == 0 || n == 1) {
return 1;
} else {
return n * factorial(n - 1);
}
}