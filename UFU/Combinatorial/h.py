s = input()

s = s.replace(' ','')
vogais = 0
consoantes = 0

for i in range(0,len(s)):
	if s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U':
		vogais += 1
	else:
		consoantes += 1

ans = 1
aux = 1
for i in range(0,len(s)):
	if consoantes == 0 or vogais == 0:
		if consoantes > 0:
			ans *= consoantes
			consoantes -= 1
		elif vogais > 0:
			ans *= vogais
			vogais -= 1
	else:
		if aux > 0:
			ans *= consoantes
			consoantes -= 1
		else:
			ans *= vogais
			vogais -= 1

		aux *= (-1);

ans = ans/2
print("%.0f" % ans)
		
	
