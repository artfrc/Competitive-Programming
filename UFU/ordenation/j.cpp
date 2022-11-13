#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	while(n > 0){

		int t;
		string s;
		vector<string> vs;

		cin >> t;
		cin.ignore();
		
		getline(cin,s);
		stringstream S(s);
		while(S >> s){
			vs.push_back(s);
		}

		sort(vs.begin(),vs.end());

		for(string y:vs)	
			cout << y;

		cout << endl;

		n--;
	}

}