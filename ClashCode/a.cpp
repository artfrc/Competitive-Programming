#include <bits/stdc++.h>
using namespace std;

const int m = 5;
int matrix[m][m];
int sol[m][m] = {0};
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
bool cops = false;

bool check(int x, int y) {
	return (x >= 0 and x < m and y >= 0 and y < m);
}

void solve(int x, int y) {
	if(x == m-1 && y == m-1) {
		cops = true;
		return;	
	}

	sol[x][y] = 1;
	for(int i = 0; i < m; i++) {
		int j = x+dx[i];
		int k = y+dy[i];
		if(!check(j,k) || matrix[j][k] || sol[j][k]) continue;
		solve(j,k);	
	}
}

int main() {
	int n; cin >> n;
	while(n--) {
		cops = false;
		sol[m][m] = {0};
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < m; j++) {
				cin >> matrix[i][j];
			}
		}
		if(!matrix[0][0]) solve(0,0);
		cout << (cops ? "COPS" : "ROBBERS") << endl;
	}
}

