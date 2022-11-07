#include <bits/stdc++.h>
using namespace std;

bool prime(int a){

	if(a <= 1) return false;

	int div = 0;
	for(int i = 1; i <= sqrt(a); i++){
		if(a % i == 0) div++;
		if(div > 1) return false;
	}
	return true;

}

int main(){
	
	int n1, n2;
	while(cin >> n1 >> n2){
		bool aux = false;
		int cont = 0;

		if(n1 > n2){
			for(int i = n1-1; i > n2; --i){
				if(prime(i)){
					if(aux) cout << " ";
					cout << i;
					aux = true;
					cont++;			
				}
			}	
		}else{
			for(int i = n1+1; i < n2; ++i){
				if(prime(i)){
					if(aux) cout << " ";
					cout << i;
					aux = true;
					cont++;			
				}
			}
		}

		if(!cont) cout << "0";

		cout << endl;

	}

}

