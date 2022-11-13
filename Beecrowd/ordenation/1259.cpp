#include <bits/stdc++.h>
using namespace std;

bool decres(int a, int b){

	return a > b;

}

int main(void){

	int n;
	cin >> n;

	vector<int> par;
	vector<int> impar;

	while(n > 0){

		int x;
		cin >> x;
		//cout << x << endl;

		if(x % 2 == 0)
			par.push_back(x);
		else
			impar.push_back(x);

		n--;

	}

	sort(par.begin(),par.end());
	sort(impar.begin(),impar.end(),decres);

	for(int y : par)
		cout << y << endl;

	for(int y : impar)
		cout << y << endl;

}