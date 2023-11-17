import timeit
def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)
if __name__ == "__main__":
    n = 500 # Example: Compute factorial of 20
elapsed_time = timeit.timeit(lambda: factorial(n), number=1000)
print(f"Time taken: {elapsed_time:.10f} seconds")