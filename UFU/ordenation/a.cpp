#include <bits/stdc++.h>
using namespace std;

bool func(string a, string b){

	if(a.size() != b.size())
		return a.size() < b.size();
	else
		return a < b;

}

int main(){

	string s;
	getline(cin,s);
	vector<string> v;

	stringstream S(s);

	while(S >> s){

		for(int i = 0; i < s.size(); i++){
			if(isalpha(s[i])){
				s[i] = tolower(s[i]);
			}else{
				if(i == 0){
					s.erase(i,i+1);
				}else{
					s.erase(i,i);
				}
			}
		}
		v.push_back(s);
	}

	sort(v.begin(),v.end(),func);

	for(string y : v) cout << y << endl;

}