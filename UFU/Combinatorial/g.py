def factorial(x):
	if x == 0 or x == 1:
		return 1
	else:
		return factorial(x-1)*x

n = int(input())

ans = factorial(n) / factorial(n-3)

print("{:.0f}".format(ans))
