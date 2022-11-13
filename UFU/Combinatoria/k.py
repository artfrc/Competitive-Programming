import math

def factorial(x):
	if x == 0 or x == 1:
		return 1
	
	return factorial(x-1)*x

n = int(input())
ans = []
c1 = math.floor(n-(n*0.37))
ans.insert(len(ans),c1)
c2 = math.floor(c1-(c1*0.2))
ans.insert(len(ans),c2)

cabos = math.floor(c2*0.3)
sargentos = math.floor(c2*0.05)
total = cabos+sargentos

c3 = math.floor(factorial(total) / factorial(total-8))
ans.insert(len(ans),c3)

print(ans)
