#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int v[10220] = {0};
	int idade = 5, count = 1, aux = 0;
	int viagens;
	cin >> viagens;
	while(viagens > 0){
		if(aux == 2){aux = 0; idade++;}
		if(v[idade] <= 0){
			if(count % 2 != 0){
				idade *= 2;
			}else{
				idade /= 2;
			}
				v[idade]++;
				count++;
				viagens--;
		}
		aux++;
	}

	cout << idade << endl;

}
