#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	char text[10005][105];
	char c[105];
	int ok = 1, cont = 0;
	scanf("%d", &n);

	while(n > 0){

		scanf("%s",c);

		for(int i = 0; i < cont; i++){
			if(strcmp(text[i],c) == 0 && ok == 1){
				ok = 0;
				break;
			}
		}

		if(ok){
			strcpy(text[cont],c);
			cont++;
		}

		n--;
	}

	if(ok){
		printf("A funcao eh boa.\n");
	}else{
		printf("A funcao nao eh boa.\n");
	}

}