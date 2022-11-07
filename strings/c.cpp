#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	string s;
	cin >> s;

	if(s == "amarela" || s == "vermelha" || s == "azul")
		cout << "primaria" << endl;
	else if(s == "laranja" || s == "verde" || s == "roxa")
		cout << "secundaria" << endl;
	else
		cout << "outra" << endl;

}