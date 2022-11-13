#include <bits/stdc++.h>
using namespace std;

int main(void){

	string n;
	while(cin >> n && n != "-1"){

		int number = stoi(n);

		if(n[1] == 'x'){
			unsigned int i;
			stringstream ss(n);
			ss >> hex >> i;
			cout << i << endl;
		}else{

			printf("0x%X\n",number);

		}

	}

}