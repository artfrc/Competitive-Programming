#include <bits/stdc++.h>
using namespace std;

int main(){

	int n, v[3005] = {0};
	while(cin >> n){
		v[n]++;
	}

	for(int i = 0; i < 3005; i++){
		if(v[i] != 0)
			cout << i << " " << v[i] << endl;
	}

}