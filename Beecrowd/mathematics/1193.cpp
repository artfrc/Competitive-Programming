#include <bits/stdc++.h>
using namespace std;

unsigned baseToDec(string, int);
string decimalToBase(unsigned s, int base);
unsigned StrToInt(string s);

int main(void){

	int n, caso = 0;
	unsigned un;
	stringstream ss;
	cin >> n;
	string number, base, ans;
	while(n--){

		cout << "Caso " << ++caso << ":" << endl;

		cin >> number >> base;

		if(base == "bin"){

			un = baseToDec(number,2);
			ss << un;
			ans = ss.str();
			cout << ans << " dec" << endl;
			cout << decimalToBase(un, 16) << " hex" << endl;

		}else if(base == "hex"){

			cout << baseToDec(number, 16) << " dec" << endl;
			unsigned a = baseToDec(number,16);
			cout << decimalToBase(a, 2) << " bin" << endl;

		}else{ // base = "dec"

			unsigned a = StrToInt(number);
			cout << decimalToBase(a, 16) << " hex" << endl;
			cout << decimalToBase(a, 2) << " bin" << endl;

		}

		cout << endl;
	
	}

}


unsigned baseToDec(string number, int base){

	unsigned ans = 0, pos = number.size()-1;

	for(int i = 0; i < number.size(); ++i, --pos){

		if(isalpha(number[i])){
			if(number[i] == 'a'){
				ans += pow(base,pos) * 10;
			}else if(number[i] == 'b'){
				ans += pow(base,pos) * 11;
			}else if(number[i] == 'c'){
				ans += pow(base,pos) * 12;
			}else if(number[i] == 'd'){
				ans += pow(base,pos) * 13;
			}else if(number[i] == 'e'){
				ans += pow(base,pos) * 14;
			}else if(number[i] == 'f'){
				ans += pow(base,pos) * 15;
			}
		}else{ // numero
			string aux;
			if(i == 0)
				aux = number.substr(i,i+1);
			else
				aux = number.substr(i,i);

			unsigned n = StrToInt(aux);
			ans += pow(base,pos) * n;
		}

	}

	return ans;

}

string decimalToBase(unsigned n, int base){

	string ans = "";

	while(n > 0){

		unsigned rest = n % base;
		stringstream ss;
		ss << rest;
		ans += ss.str();
		n /= base;

	}

	reverse(ans.begin(),ans.end());

	return ans;

}

unsigned StrToInt(string str){

	int tamanho;
	unsigned ret, multiplicador;

	for(tamanho = str.size() - 1, multiplicador = 1, ret = 0; tamanho >= 0; tamanho--, multiplicador *= 10)
		ret +=  (str[tamanho] - 48) * multiplicador;

	return ret;

}