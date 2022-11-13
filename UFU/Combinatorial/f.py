def fibFabio(n):
	a = 1
	b = 1
	c = 1

	for i in range(3,n,1):
		a,b = b,a
		b,c = c,b
		c = a+b+c

	print(c)

n = input()
n = int(n)

fibFabio(n) 
