#include <bits/stdc++.h>
using namespace std;

struct STR{

	int n;
	struct STR * esq;
	struct STR * dir;

};

typedef struct STR * str;

int insere(str * STR, int a){

	str no = (str) malloc(sizeof(struct STR));
	if(no == NULL) return 0;

	no->n = a;
	no->esq = NULL;
	no->dir = NULL;

	if(STR == NULL){
		*STR = no;
	}

	return 1;

}

int main(){

	int n;
	str STR = NULL;

	cin >> n;

	if(insere(&STR,n))
		cout << "OK" << endl;
	else
		cout << "FAIL" << endl;

	cout << STR->n << endl;
}