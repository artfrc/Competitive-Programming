#include <bits/stdc++.h>
using namespace std;

void ans(string s, int sum){

	string number = "";
	int aux = 0;
	for(int i = 0; i <= s.size(); i++){

		if(aux == 0 && isdigit(s[i])){
			aux = 1;
			number += s[i];
		}else if(aux == 1 && isdigit(s[i])){
			number += s[i];
		}else if(aux == 1 && !isdigit(s[i])){
			aux = 0;
			int numberConvert = stoi(number);
			sum += numberConvert;
			number.clear();
		}

	}

	cout << sum << endl;
		

}

int main(){

	int n, sum;
	string s;
	cin >> n;
	while(n > 0){
		sum = 0;
		cin >> s;

		ans(s,sum);

		n--;
	}

}