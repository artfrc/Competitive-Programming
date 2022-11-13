#include <bits/stdc++.h>
using namespace std;

int numberLeds(char n){

	if(n == '1'){
		return 2;
	}else if(n == '2'){
		return 5;
	}else if(n == '3'){
		return 5;
	}else if(n == '4'){
		return 4;
	}else if(n == '5'){
		return 5;
	}else if(n == '6'){
		return 6;
	}else if(n == '7'){
		return 3;
	}else if(n == '8'){
		return 7;
	}else if(n == '9'){
		return 6;
	}else if(n == '0'){
		return 6;
	}

}

int main(void){

	int n;
	unsigned long long nLeds;
	string number;
	cin >> n;
	while(n > 0){
		nLeds = 0;
		cin >> number;
		for(int i = 0; i < number.size(); i++){
			nLeds += numberLeds(number[i]);
		}

		cout << nLeds << " leds\n";

		n--;
	}

}