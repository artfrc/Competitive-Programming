#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int n;
	cin >> n;

	while(n != -1){

		string s;
		cin >> s;

		string ans;
		cin >> ans;

		int wrong = 0;

		for(int i = 0; i < ans.size() && s.size() > 0; ++i){
			int ok = 0;
			for(int j = 0; j < s.size(); j++){
				if(s[j] == ans[i]){
					s.erase(j,j+1);
					ok = 1;
				}
			}
			if(!ok){
				wrong++;
			}
		}

		cout << "Jogo " << n << endl;

		if(s.size() == 0){
			cout << "ganhou." << endl;
		}else if(wrong >= 7){
			cout << "perdeu.\n";
		}else{
			cout << "desistiu." << endl;
		}

		cin >> n;

	}

}