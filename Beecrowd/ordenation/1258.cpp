#include <bits/stdc++.h>
using namespace std;

struct str{

	string nome;
	string cor;
	char tamanho;

	str(){}
	str(string nome, string cor, char tamanho):nome(nome),cor(cor),tamanho(tamanho){}

	bool operator < (const str &other) const{

		if(cor != other.cor){
			if(cor == "branco") return true;
			else return false;
		}else if(tamanho != other.tamanho){
			if(tamanho == 'P') return true;
			else if(tamanho == 'M' && other.tamanho == 'G') return true;
			else return false;
		}else if(nome != other.nome) return nome < other.nome;
	}

};

int main(void){

	int n, ok = 0;
	cin >> n;
	while(n != 0){

		if(ok) cout << endl;

		vector<str> v;

		while(n > 0){

			string nome, cor;
			char tamanho;
			cin.ignore();
			getline(cin,nome);
			cin >> cor >> tamanho;

			v.push_back(str(nome,cor,tamanho));

			n--;
		}

		sort(v.begin(),v.end());

		for(int i = 0; i < v.size(); i++){
			cout << v[i].cor << " " << v[i].tamanho << " " << v[i].nome << endl;
		}

		ok = 1;

		cin >> n;

	}

}