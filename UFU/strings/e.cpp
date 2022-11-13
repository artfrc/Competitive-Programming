#include <bits/stdc++.h>
using namespace std;

int main(void){

	int n;
	cin >> n;
	while(n != -1){

		int horas[1005][1005][1005][1005];

		while(n >= 0){

			int hora,min,seg,miliseg;
			string s;

			scanf("%d:%d:%d:%d-",&hora,&min,&seg,&miliseg);
			getline(cin,s);
			cout << s << endl;

			n--;

		}

		cin >> n;
	}

}