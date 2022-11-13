#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	while(n > 0){
		
		string a,b;
		cin >> a >> b;

		if(a.size() < b.size())
			cout << "nao encaixa\n";
		else{
			string ans = a.substr(a.size()-b.size(),a.size());
			if(ans == b){
				cout << "encaixa\n";
			}
			else
				cout << "nao encaixa\n";
		}

		n--;
	}	

}