#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	double ans = 1;
	double NroBallsColor = n/4;
	for(int i = n; i > 0; i--) {
		if(NroBallsColor == n/4) {
			ans *= 1;
		} else if(NroBallsColor > 0) {
			double chance = NroBallsColor/i;
			ans *= chance;
		}

		NroBallsColor--;

		if(NroBallsColor < 1) { NroBallsColor = n/4; } 
	}

	cout << fixed << setprecision(7) << ans  << "%" << endl;

}
