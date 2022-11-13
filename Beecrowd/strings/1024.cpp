#include <bits/stdc++.h>
using namespace std;

void cripto(string s){

	for(int i = 0; i < s.size(); ++i){
		if(isalpha(s[i]))
			s[i] += 3;
	}

	string ans = "";

	for(int i = s.size()-1; i >= 0; i--){
		ans.push_back(s[i]);
	}

	for(int i = ans.size()/2; i < ans.size(); i++){
		ans[i]--;
	}

	cout << ans << endl;

}

int main(void){

	int n;
	string text;
	cin >> n;
	cin.ignore();
	while(n > 0){
		getline(cin,text);
		cripto(text);
		n--;
	}

}