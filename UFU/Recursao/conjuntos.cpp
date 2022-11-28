#include <bits/stdc++.h>
using namespace std;

void solve(string s, vector<bool> v, int pos) {
	int i = 0;
	int j = 0;
	if(pos == s.size()) {
		while(i < s.size()) {
			if(v[i]) {
				cout << s[i];
				j++;
			}
			i++;
		}
		if(j > 0) { cout << endl; }
	} else {
		v[pos] = true;
		solve(s,v,pos+1);
		v[pos] = false;
		solve(s,v,pos+1);
	}
}

int main() {
	string s;
	cin >> s;
	vector<bool> v(s.size(),false);
	solve(s,v,0);
}
