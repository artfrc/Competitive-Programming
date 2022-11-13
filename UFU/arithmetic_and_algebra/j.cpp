#include <bits/stdc++.h>
using namespace std;

int main(){

	int a1,a2,b1,b2;
	int c1,c2,d1,d2;
	while(scanf("%dx%d + %dx%d%dx%d + %dx%d", &a1, &b1, &a2, &b2, &c1, &d1, &c2, &d2) != EOF){
		int v[500] = {0};
		v[b1+d1] += a1 * c1;
		v[b1+d2] += a1 * c2;
		v[b2+d1] += a2 * c1;
		v[b2+d2] += a2 * c2;

		bool aux = false;

		for(int i = 499; i > 0; --i){
			if(v[i] > 0){
				if(aux) cout << " + ";
				if(v[i] == 1 && i == 1) cout << "x";
				else{
					cout << v[i] << "x" << i;
				}
				aux = true;
			}
		}	
		cout << endl;
	}

}

// (2x^2 + 1x^1) * (1x^3 + 4x^2)
// 2x^5 + 8x^4 + 1x^4 + 4x^3
// 2x^5 + 9x^4 + 4x^3
