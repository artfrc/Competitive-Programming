#include <bits/stdc++.h>
using namespace std;

bool func(int a, int b){

	return a > b;

}

int main(){

	int n;
	vector<int> v;
	while(cin >> n){

		v.push_back(n);

	}

	sort(v.begin(),v.end());

	int ok = 1;
	for(int x : v){
		if(ok){
			cout << x;
			ok = 0;
		}else{
			cout << " " << x;
		}
	}
	cout << endl;

	sort(v.begin(),v.end(),func);

	ok = 1;

	for(int x : v){
		if(ok){
			cout << x;
			ok = 0;
		}else{
			cout << " " << x;
		}
	}
	cout << endl;

}