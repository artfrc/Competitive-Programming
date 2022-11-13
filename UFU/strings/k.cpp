#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		int n,m,ans = 0;
		cin >> n >> m;
		vector<vector<string>> v;
		cin.ignore();
		string s;
		while(n--){
			cin >> s;
			v.push_back(s); 
		}
		while(m--){
			cin >> s;
			string aux = "";
			for(int i = 1; i < s.size(); i++){
				if(s[i] == '/'){
					for(int j = 0; j < 
					aux.clear();
				}else{
					aux += s[i];
				}
			}			
		}
	}

}
