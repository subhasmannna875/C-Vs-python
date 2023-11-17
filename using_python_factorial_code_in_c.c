import ctypes
import os
# Determine the correct file extension based on the operating system
library_extension = ’.dll’ if os.name == ’nt’ else ’.so’
# Load the shared library
factorial_lib = ctypes.CDLL(f’./factorial{library_extension}’)
# Call the C function from Python
n = 5
result = factorial_lib.factorial(n)
print(f"Factorial of {n} is {result}")   