#include <bits/stdc++.h>
using namespace std;

void perfect_square(int n){

	double root = sqrt(n);
	if(root*root == double(n)){
		cout << "Quadrado perfeito\n";
		cout << n << endl;
		cout << root << endl;
	}else{
		cout << "Nao eh quadrado perfeito\n";
		cout << int(root)*int(root) << endl;
		cout << int(root) << endl; 
	}
}

int main(){
	
	int n;
	cin >> n;

	perfect_square(n);

}
