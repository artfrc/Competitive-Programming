#include <bits/stdc++.h>
using namespace std;

const int DIM = 4;

bool Caminho(int x, int y, int matriz[DIM][DIM], int sol[DIM][DIM]) {

	// Caminhos errados
	
	if(x < 0 || x > DIM-1) return false;
	if(y < 0 || y > DIM-1) return false;
	if(matriz[y][x] == 0) return false;
	
	// Caminhos que leva para algum lugar	

	if(x == DIM-1 && y == DIM-1) {
		sol[x][y] = 1;
		return true;
	}

	sol[y][x] = 1;

	if(Caminho(x+1,y,matriz,sol)) return true;
	if(Caminho(x,y+1,matriz,sol)) return true;

	sol[x][y] = 0;
	return false;
}

bool Inicio(int matriz[DIM][DIM]) {
	int sol[DIM][DIM] = {0};
	if(!Caminho(0,0,matriz,sol)) return false;

	for(int i = 0; i < DIM; i++) {
		for(int j = 0; j < DIM; j++) {
			cout << sol[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	return true;
	
}

int main() {

	int matriz[DIM][DIM];
	for(int i = 0; i < DIM; i++) {
		for(int j = 0; j < DIM; j++) {
			int x;
			cin >> x;
			matriz[i][j] = x;
		}
	}

	if(Inicio(matriz)) cout << "Yes!\n";
	else			   cout << "No!\n";	

}
