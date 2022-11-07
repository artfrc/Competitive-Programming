#include <bits/stdc++.h>
using namespace std;

int main(){

	int n, valor, itens;
	cin >> n;
	
	int i = 1;
	while(i <= n){

		cin >> valor >> itens;

		vector<int> v;
		for(int j = 0; j < itens; ++j){
			int x;
			cin >> x;
			v.push_back(x);
		}

		int ok = 1;

		for(int j = 0; j < itens && ok; ++j){
			for(int k = 0; k < j && ok; ++k){

				if(v[j] + v[k] == valor){
					if(j > k){
						cout << "Caso #" << i << ": " << k+1 << " " << j+1 << endl;
					}else{
						cout << "Caso #" << i << ": " << j+1 << " " << k+1 << endl;
					}

					ok = 0;

				}

			}
		}

		v.clear();
		i++;
	}


}