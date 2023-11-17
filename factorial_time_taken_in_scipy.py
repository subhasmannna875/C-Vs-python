from scipy.special import factorial
import timeit
22
# Function to calculate factorial using SciPy
def calculate_factorial(n):
    return factorial(n)
if __name__ == "__main__":
    n = 50# Example: Calculate factorial of 5
    elapsed_time = timeit.timeit(lambda: calculate_factorial(n), number=100000)
    result = calculate_factorial(n)
    print(f"Factorial of {n} is {result}")
    print(f"Time taken: {elapsed_time:.10f} seconds")