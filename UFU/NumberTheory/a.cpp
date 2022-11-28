#include <bits/stdc++.h>
using namespace std;

bool IsPrime(long long int n) {
	
	if(n <= 1) return false;

	int ok = 0;
	for(int i = 1; i <= sqrt(n); i++) {
		if(n % i == 0) {
			ok++;
		}
		if(ok > 1) {
			return false;
		}
	}
	return true;
}

int main() {
	long long int n;
	cin >> n;

	vector<long long int> v;

	if(n % 2 == 0) {
		cout << "1" << endl;
	} else {
		for(int i = 0; i < n; i++) {
			if(IsPrime(i)) {
				//v.push_back(i);
				cout << i << " ";			
			}
		}
		//cout << endl;
		vector<long long int>::iterator it;
		it = find(v.begin(), v.end(), n-2);
		if(it != v.end()) {
			cout << "1" << endl; 
		} else {
			cout << "0" << endl;
		}
	}
}
