#include <bits/stdc++.h>
using namespace std;

const int sz = 10;
int matrix[sz][sz];
int vis[sz][sz];
bool ok;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

bool check(int x, int y, int m) {
  return (x >= 0 and x < m and y >= 0 and y < m);
}

void solve(int x, int y, int m) {
  if(x == m-1 and y == m-1) {
    ok = true;
    return;
  }
  
  vis[x][y] = 1;
  for(int i = 0; i < 4; i++) {
    int j = x+dx[i];
    int k = y+dy[i];
    if(!check(j,k,m) or vis[j][k] or matrix[j][k]) continue;
    
    solve(j,k,m);
  }
}

int main() {
  int n; cin >> n;
  while(n--) {
    int m; cin >> m;
    ok = false;
    for(int i = 0; i < m; i++) {
      for(int j = 0; j < m; j++) {
        cin >> matrix[i][j];
        vis[i][j] = 0;
      }
    }
    if(!matrix[0][0]) solve(0,0,m);
    cout << (ok ? "1" : "0") << endl;
  }
}

/*
Input test:
2
7
0 0 0 0 0 1 1
1 1 1 0 0 1 1
1 0 1 0 0 0 1
1 0 0 1 1 1 1
1 1 1 0 0 0 0
1 1 0 1 0 1 0
1 0 0 1 0 0 0
6
0 0 0 0 0 1
1 1 1 0 0 1
1 0 1 0 0 0
1 0 1 0 1 1
1 1 1 0 0 0
1 1 0 0 0 0

Output:
0
1
*/
