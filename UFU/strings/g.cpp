#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n,t;
	string s;

	cin >> n;

	while(n > 0){

		cin >> t;
		cin.ignore();
		getline(cin,s);
		
		int resto = t % s.size();

		for(int i = 0; i < resto; ++i){
			s.push_back(s[i]);
		}

		s.erase(0,resto);

		cout << s << endl;

		n--;
	}
	

}