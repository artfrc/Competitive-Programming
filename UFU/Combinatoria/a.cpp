#include <bits/stdc++.h>
using namespace std;

int fatorial(int n) {
	
	if(n == 0 || n == 1) return 1;

	return fatorial(n-1)*n;

}

int sum_digits(int n) {

	int sum = 0;

	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}

	return sum;

}

int main() {

	int n;
	scanf("%d", &n);
	printf("[");
	int aux = 0;
	int v[2345] = {0}, *p, k = 0;
	while(n > 0) {
		int fat = fatorial(n);
		int sum = sum_digits(fat);			
		if(sum < 10) {
			p = find(v,v+(sizeof(v)/sizeof(int)), sum);
			if(p == v+(sizeof(v)/sizeof(int))) {
				if(aux) printf(", ");
				v[k] = sum;
				printf("%d", sum);
				k++;
				aux = 1;
			}	
		}
		n--;
	}

	printf("]\n");

}
