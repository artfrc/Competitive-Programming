import math

def IsPrime(n):
	if n <= 1:
		return False

	ok = 0
	limit = int(math.sqrt(n)+2)
	for i in range(1, limit):
		if ok > 1:
			return False

		if n % i == 0:
			ok += 1

	return True

x = int(input())
if x % 2 == 0:
	print(1)
else:
	vet = []
	for i in range(1,x):
		if(IsPrime(i)):
			vet.append(i)

	flag = 0
	for i in range(1,len(vet)):
		if vet[i] == x-2:
			flag = 1
			break

	if flag:
		print(1)
	else:
		print(0)
