#include <bits/stdc++.h>
using namespace std;

bool func(pair<int,string> p1, pair<int,string> p2){

	if(p1.first == p2.first) return false;

	return (p1.first < p2.first); 
	
}

int main(){

	double ham, cac, hum, elf;
	cin >> ham >> cac >> hum >> elf;

	cac /= 7;
	hum /= 7*7;
	elf /= 7*7*7;

	vector<pair<int,string>> v;
	pair<int,string> p;

	p.first = ham; p.second = "Hamster";
	v.push_back(p);

	p.first = cac; p.second = "Cachorro";
	v.push_back(p);
	
	p.first = hum; p.second = "Humano";
	v.push_back(p);

	p.first = elf; p.second = "Elfo";
	v.push_back(p);

	sort(v.begin(),v.end(),func);

	cout << v.back().second << " eh o mais velho.\n"; 
	

}
