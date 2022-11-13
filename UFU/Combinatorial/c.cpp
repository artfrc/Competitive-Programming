#include <bits/stdc++.h>

using namespace std;

int fibJoana(int n) {
	if(n == 1 || n == 2) return 1;
	return fibJoana(n-1) + fibJoana(n-2) * 3;
}

int main() {

	int n;
	cin >> n;
	cout << fibJoana(n) << endl;
		
}
