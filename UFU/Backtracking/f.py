import math

n = int(input())
while n != 0:
    print(math.factorial(n-1)*n)
    n = int(input())
