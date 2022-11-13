#include <bits/stdc++.h>
using namespace std;

int main() {

/* @ Codigo na forca bruta!

	string s;
	getline(cin, s);

	int nVogais = 0;
	int nConsoantes = 0;

	for(int i = 0; i < s.size(); i++) {
		if(s[i] == ' ') { s.erase(i,1); i--; }
		else if(s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U') nConsoantes++;
		else nVogais++;
	}

	sort(s.begin(),s.end());

	int ans = 0;
	while(next_permutation(s.begin(),s.end())) {
		int vogais = nVogais;
		int consoantes = nConsoantes;
		int interleave = 1; // 1 vogal ; -1 consoante
		bool flag = true;		
		if(s[0] != 'A' && s[0] != 'E' && s[0] != 'I' && s[0] != 'O' && s[0] != 'U') {
			// começa com consoante, então verifico as outras regras
			for(int i = 1; i < s.size(); i++) {
				if(vogais == 0 || consoantes == 0) break;
				if(interleave == 1) {
					// o character aqui tem que ser vogal
					if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
						vogais--;
					} else {
						flag = false;
						break;
					}			
				} else {
					// o character qaqui tem que ser consoante
					if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
						flag = false;						
						break;
					} else {
						consoantes--;
					}
				}
				interleave *= (-1);
			}
			if(flag) ans++;
		}

	}
	
	cout << ans << endl;
*/

	string s;
	getline(cin, s);

	int nVogais = 0;
	int nConsoantes = 0;

	for(int i = 0; i < s.size(); i++) {
		if(s[i] == ' ') { s.erase(i,1); i--; }
		else if(s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U') nConsoantes++;
		else nVogais++;
	}

	int aux = 1;
	long long int ans = 1;
	for(int i = 0; i < s.size(); i++) {
		if(nConsoantes == 0 || nVogais == 0) {
			if(nConsoantes > 0) { ans *= nConsoantes; nConsoantes--; }
			else if(nVogais > 0) { ans *= nVogais; nVogais--; }		
		} else {

			if(aux > 0) {
				ans *= nConsoantes;
				nConsoantes--;
			} else {
				ans *= nVogais;
				nVogais--;
			}
			aux *= (-1);
		}	
	}
		
	cout << ans/2 << endl;

}
