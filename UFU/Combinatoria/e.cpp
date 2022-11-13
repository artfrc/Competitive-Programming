#include <bits/stdc++.h>
using namespace std;

int main() {

	int A,Q;
	cin >> A >> Q;
	
	float ans = pow(A,Q);
	cout << ans << endl;	
	ans = 1./ans;

	cout << fixed << setprecision(6) <<  ans << "%" << endl;

}
