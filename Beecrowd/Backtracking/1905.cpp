#include <bits/stdc++.h>
using namespace std;

const int n = 5;
int m[n][n];
bool cops;
int vis[n][n];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

bool check(int i, int j) {
	return (i >= 0 and i < n and j >= 0 and j < n);
}

void solve(int x, int y) {
	if(x == n-1 and y == n-1) { cops = true; return; }
	
	vis[x][y] = 1;
	for(int k = 0; k < n; ++k) {
		int i = x+dx[k];
		int j = y+dy[k];
		if(!check(i,j) or vis[i][j] or m[i][j]) continue;
		
		solve(i,j);
	}
	
}

int main() {
	int x;
	cin >> x;
	while(x--) {
		cops = false;
		memset(vis,0,sizeof(vis));
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				int y;
				cin >> y; m[i][j] = y;
			}
		}
		if(!m[0][0]) solve(0,0);
		cout << (cops ? "COPS" : "ROBBERS") << endl;
	}
}
