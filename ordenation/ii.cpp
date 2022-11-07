#include <bits/stdc++.h>
using namespace std;

string inverte(string s){

	string inv = "";
	for(int i = s.size()-1; i >= 0; --i)
		inv += s[i];

	return inv;

}

int main(){

	string s;
	while(cin >> s){

		int ehprimo = 1;
		double n = stoi(s);

		/*============================================|
		| Confiro se n é primo			      	      |
		|============================================*/

		for(int i = 2; i < n/2; i++){
			if((int)n % i == 0){
				ehprimo = 0;
				break;
			}
		}

		if(ehprimo){

			string inv = s;
			reverse(s.begin(),s.end());
			
			if(inv == s){
				cout << inv << " primo" << endl;
			}else{

				n = stoi(s);

				/*============================================|
				| Confiro se inv é primo			      	      |
				|============================================*/

				for(int i = 2; i < n/2; i++){
					if((int)n % i == 0){
						ehprimo = 0;
						break;
					}
				}

				if(ehprimo){
					cout << inv << " omirp" << endl;
				}else{
					cout << inv << " primo" << endl;
				}

			}
		}else{
			cout << s << " nao primo" << endl;
		}

	}

}