#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli factorial(lli a){

	if(a == 0)
		return 1;
	else
		return factorial(a-1) * a;

}

int main(){

	lli x,y;

	while(cin >> x >> y){

		cout << factorial(x) + factorial(y) << endl;

	}

}