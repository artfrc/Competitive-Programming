#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	scanf("%d", &n);
	while(n > 0){

		char s[1005];
		scanf("%s", s);

		int i,j,cont = 0;

		for(i = 1; s[i] != '\0'; i++){
			char aux = s[i];
			for(j = i-1; j >= 0 && aux < s[j]; j--){
				cont++;
				s[j+1] = s[j];
			}
			cont++;
			s[j+1] = aux;
		}

		printf("%d\n", cont);

		n--;
	}

}