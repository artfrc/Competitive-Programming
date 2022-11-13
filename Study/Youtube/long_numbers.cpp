#include <bits/stdc++.h>
using namespace std;

int main(){

	cout << "Double:\n";
	double a = 100000;
	double b = 100000;
	double c = a * b;

	cout << c << endl;
	cout << fixed << c << endl;
	cout << fixed << setprecision(0) << c << endl;

	cout << "\nInt:\n";
	int d = 100000;
	int e = 100000;
	long long int f = d * e;

	cout << f << endl;

	f = d * 1LL * e;

	cout << f << endl;

}
