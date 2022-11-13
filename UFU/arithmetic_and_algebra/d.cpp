#include <bits/stdc++.h>
using namespace std;

char alpha[100];
	
int main(){

	int letter = 'A';	
	int j = 0;
	for(int i = 10; i < 36; i++){		
		alpha[i] = char(letter+j);
		++j;
	}

	long long int N;
	int base;

	cin >> N >> base;

	if(N == 0) cout << N << endl;
	else{
		string ans = "";

		while(N > 0){
			int rest = N % base;
			N /= base;
			if(rest > 9){
				ans += alpha[rest];
			}else{
				stringstream ss;
				ss << rest;
				string s = ss.str();
				ans += s;
			}
		}
	
		reverse(ans.begin(),ans.end());
		cout << ans << endl;
	}
}
