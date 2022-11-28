#include <bits/stdc++.h>
using namespace std;

void solve(set<char> s, vector<int>& vis);

int main() {
	int n, Case = 1;
	bool flag = false;
	cin >> n;
	while(n--) {
		if(flag) cout << endl;
		cout << "Case #" << Case << ":" << endl;
		Case++;
		flag = true;
		
		int v,a;
		cin >> v >> a;
		vector<set<char>> vet(v);
		char c = 'a';		
		for(int i = 0; i < v; i++) {
			vet[i].insert(c);
			c++;
		}
		
		while(a--) {
			char a1,a2;
			cin >> a1 >> a2;
			vet[(int)a1 - (int)'a'].insert(a2);
			vet[(int)a2 - (int)'a'].insert(a1);
		}


		for(int i = 0; i < vet.size(); i++) {
			set<char>::iterator it = vet[i].begin();
			while(it != vet[i].end()) {
				cout << *it << " ";
				it++;
			}
			cout << endl;
		}
	
		cout << endl;

		vector<int> vis(v,0);
		for(int i = 0; i < vet.size(); i++) {
			solve(vet[i],vis);
			cout << endl;
		}
	
	}
}

void solve(set<char> s, vector<int>& vis) {
		auto it = s.begin();
		while(it != s.end()) {
			if(vis[(int)*it - (int)'a']) return;
			cout << *it << ",";
			vis[(int)*it - (int)'a'] = 1;
			it++;		
		}
}



