#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	while(n > 0){

		int x,y;
		cin >> x >> y;

		cout << __gcd(x,y) << endl;

		n--;
	}


}