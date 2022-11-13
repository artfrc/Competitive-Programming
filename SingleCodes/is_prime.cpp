#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){

	if(n == 1)
		return false;

	int div = 0;

	for(int i = 1; i <= sqrt(n); ++i){
			if(n % i == 0)
				div++;

			if(div > 1)
				return false;
	}

	return true;

}

int main(){
	
	int x;

	cin >> x;

	if(is_prime(x))
		cout << "is prime\n";
	else
		cout << "not prime\n";

}
