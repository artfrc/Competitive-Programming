#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

struct str{

	string carne;
	int pedacos;

	str(){}
	str(string carne, int pedacos):carne(carne),pedacos(pedacos){}

	bool operator < (const str &other) const{

		if(pedacos != other.pedacos) return pedacos < other.pedacos;

	}

};

int main(void){

	int n;
	while(cin >> n){

		vector<str> v;

		while(n > 0){

			string carne;
			int pedacos;

			cin.ignore();
			cin >> carne >> pedacos;

			v.push_back(str(carne,pedacos));

			n--;

		}

		sort(v.begin(),v.end());

		int ok = 1;
		for(int i = 0; i < v.size(); i++){
			if(ok){
				cout << v[i].carne;
				ok = 0;
			}else{
				cout << " " << v[i].carne;
			}
		}

		cout << endl;

	}

}