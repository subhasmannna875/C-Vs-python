def factorial(n):
    if n==0 or n==1:
        return 1
    else:
        return n * factorial(n-1)
n=10 # we want to calculate factorial of 3
print(f"Factorial of {n} is {factorial(n)}")