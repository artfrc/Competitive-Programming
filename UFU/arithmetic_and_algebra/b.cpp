#include <bits/stdc++.h>
using namespace std;

int main(){

	int c,d;
	cin >> c >> d;

	int ans = 0;
	for(int i = 0; i < d; i++){
		int n;
		cin >> n;
		ans = ans + (n*c);
	}

	cout << ans << endl;	
	
}
