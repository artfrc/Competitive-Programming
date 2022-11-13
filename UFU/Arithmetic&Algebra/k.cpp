#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int N,M;
	cin >> N >> M;
	int gcd = __gcd(N,M);
	if(gcd < 2){
		cout << "Ficar na colmeia\n";
	}else{
		cout << N/gcd << " " << M/gcd << " " << gcd << endl;
	}

}
