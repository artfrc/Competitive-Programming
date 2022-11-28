#include <bits/stdc++.h>
using namespace std;

/*	Method Briot Ruffini (Polinomios)
	3x^4 - 2x^3 + 5x^2 - 10x + 4 = ? para x = 4
	A entrada para esse polinômio será: 4 3 -2 5 -10 4, onde o primeiro elemento é o valor de x, o restante é o valor de cada grau do polinomio
*/

int ruffini(vector<int> v, int x) {
	int result = v[0];
	vector<int>::iterator it = v.begin()+1;
	for(it; it != v.end(); it++) {
		result = result*x + *it;
	}
	return result;
}

int main() {

	int x;
	cin >> x;
	vector<int> v;
	int n;
	while(cin >> n) { v.push_back(n); }

	cout << ruffini(v,x) << endl;

}
