#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

struct str{

	string nome;
	int peso, idade;
	double altura;

	str(){}
	str(string nome, int peso, int idade, double altura):nome(nome),peso(peso),idade(idade),altura(altura){}

	bool operator < (const str &other) const{
		if(peso != other.peso) return peso > other.peso;
		else if(idade != other.idade) return idade < other.idade;
		else if(altura != other.altura) return altura < other.altura;
		else if(nome != other.nome) return nome < other.nome;
	}

};

int main(void){

	int n;
	cin >> n;
	int i = 1;

	while(i <= n){

		vector<str> v;

		int renas, goRenas;
		cin >> renas >> goRenas;

		while(renas > 0){

			string n;
			int p, i;
			double a;

			cin.ignore();

			cin >> n >> p >> i >> a;
			v.push_back(str(n,p,i,a));

			renas--;
		}

		sort(v.begin(),v.end());

		cout << "CENARIO {" << i << "}\n";

		for(int j = 1; j <= goRenas; j++){
			cout << j << " - " << v[j-1].nome << endl;
		}

		++i;
	}

}