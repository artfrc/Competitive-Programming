def factorial(n):
	if n == 0 or n == 1:
		return 1;

	return factorial(n-1)*n

n = int(input())

ans = factorial(n) / (factorial(2) * factorial(n-2))

print("%.0f" % ans)
