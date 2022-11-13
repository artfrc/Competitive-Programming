#include <bits/stdc++.h>
using namespace std;

int main(){

	int x,y;
	while(cin >> x >> y && (x||y)){

		int restoX, restoY, soma = 0, nCarry = 0;
		bool carry = false;

		while(y > 0 && x > 0){

			restoX = x % 10;
			restoY = y % 10;

			soma = restoX + restoY;
			if(carry)
				soma++;

			if(soma > 9){
				nCarry++;
				carry = true;
			}else{
				carry = false;
			}

			x /= 10;
			y /= 10;

		}

		if(y > 0){

			while(y > 0){

				restoY = y % 10;

				soma = restoY;
				if(carry)
					soma++;

				if(soma > 9){
					nCarry++;
					carry = true;
				}else{
					carry = false;
				}

				y /= 10;

			}			

		}else if(x > 0){

			while(x > 0){

				restoX = x % 10;
				
				soma = restoX;
				if(carry)
					soma++;

				if(soma > 9){
					nCarry++;
					carry = true;
				}else{
					carry = false;
				}

				x /= 10;

			}

		}

		if(nCarry == 0){
			cout << "No carry operation.\n";
		}else if(nCarry == 1){
			cout << "1 carry operation.\n";
		}else{
			cout << nCarry << " carry operations.\n";
		}

	}

}

