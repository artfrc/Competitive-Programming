#include <bits/stdc++.h>
using namespace std;

double v[4294967299];

int main(){

	double n;
	while(cin >> n){

		double guardar = n;

		int ehprimo = 1;

		/*============================================|
		| Confiro se n é primo			      	      |
		|============================================*/

		for(int i = 2; i < n/2; i++){
			if((int)n % i == 0){
				ehprimo = 0;
				break;
			}
		}

		if(ehprimo){

			double i = 0;

			while(n > 10){
				v[(int)i] = (int)n % 10;
				n /= 10;
				i++;
			}

			v[(int)i] = (int)n;
			i++;

			double potencia = i;
			double inverter = 0;

		/*============================================|
		| To invertendo o numero					  |
		|============================================*/

			for(double j = 0; j < i; j++){
				v[(int)j] = v[(int)j] * pow(10,potencia-1);
				potencia--;
				inverter += v[(int)j];
			}

			if(inverter == guardar){
				printf("%.0f primo\n", guardar);
			}else{

		/*============================================|
		| Confiro se o invertido tbm é primo 		  |
		|============================================*/

				for(int i = 2; i < inverter/2; i++){
					if((int)inverter % i == 0){
						ehprimo = 0;
						break;
					}
				}

				if(ehprimo){
					printf("%.0f omirp\n",guardar);
				}else{
					printf("%0.f primo\n",guardar);
				}

			}

			
		}else{
			printf("%0.f nao primo\n", n);
		}

	}

}