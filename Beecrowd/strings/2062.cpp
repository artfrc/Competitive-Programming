#include <bits/stdc++.h>
using namespace std;

void obiuri(string &c){

	if(c.size() == 3){
		if(c[0] == 'U' && c[1] == 'R'){
			c[2] = 'I';
		}else if(c[0] == 'O' && c[1] == 'B'){
			c[2] = 'I';
		}
	}
}

int main(void){

	int n;
	string s;
	cin >> n;
	int ok = 1;
	while(n > 0){

		cin >> s;

		obiuri(s);

		if(ok){
			cout << s;
			ok = 0;
		}else{
			cout << " " << s;
		}

		n--;
	}

	cout << endl;

}