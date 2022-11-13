def factorial(n):
	if n == 0 or n == 1: return 1
	else: return factorial(n-1)*n

s = input()

s = s.replace(' ','')
vogais = 0
consoantes = 0

for i in range(0,len(s)):
	if s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U':
		vogais += 1
	else:
		consoantes += 1

ans = (factorial(vogais) * factorial(consoantes))/2
print("%.0f" % ans)
		
	
