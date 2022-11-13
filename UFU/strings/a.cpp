#include <bits/stdc++.h>
using namespace std;

vector<string> positivo = {"excelente", "bom", "otimo", "adoro", "amo"};
vector<string> negativo = {"ruim", "pessimo", "odeio", "droga", "fraco"};

int main(void){

	int n;
	string s;

	while(cin >> n){

		cin.ignore();

		int npos = 0;
		int nneg = 0;

		while(n > 0){

			getline(cin,s);

			string ant = "";

			stringstream S(s);
			while(S >> s){

				// esse for tira sinais nao alfabéticos da palavra
				for(int i = 0; s[i] != '\0'; ++i){
					if(!isalpha(s[i]) && i == 0){
						s.erase(i,i+1);
					}else if(!isalpha(s[i]) && i != 0){
						s.erase(i,i);
					}
				}


				// verifica se a palavra está no dicionário
				vector<string>::iterator it;
				int ok = 0;
				it = find(positivo.begin(),positivo.end(),s);

				/*===========================================|
				|	WTF, A NEGACAO EH PARA FUNCIONAR SOMENTE |
				|	QUANDO A PALAVRA EH NEGATIVA????		 |
				|===========================================*/

				if(it != positivo.end()){
					//if(ant == "nao"){
					//	nneg++;
					//}else
					{
						npos++;
					}
					ok = 1;
				
					//cout << npos << " " << nneg << " " << ant << " " << s << endl;
				}

				if(!ok){
					it = find(negativo.begin(),negativo.end(),s);
					if(it != negativo.end()){
						if(ant == "nao"){
							npos++;
						}else{
							nneg++;
						}
						ok = 1;
						//cout << npos << " " << nneg << " " << ant << " " << s << endl;
					}					
				}

				ant = s;

			}

			n--;

		}

		if(npos > nneg){
			cout << "positivo\n";
		}else if(npos < nneg){
			cout << "negativo\n";
		}else{
			cout << "neutro" << endl;
		}

	}


}	