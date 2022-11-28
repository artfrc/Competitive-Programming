#include <bits/stdc++.h>
using namespace std;

int ruffini(int a, int n) {
	int result = n;
	for(int i = n-1; i >= 0; i--) {
		result = result*a + i;
	}	
	return result;
}

int main() {
	
	int a,n;
	cin >> a >> n;
	cout << ruffini(a,n) << endl;

}
