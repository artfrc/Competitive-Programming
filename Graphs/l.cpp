#include <bits/stdc++.h>
using namespace std;

const int N = 51;
char matrix[N][N];
bool vis[N][N];
int x,y;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
vector<pair<int,int>> v;

bool check(int i, int j) {
  return (i >= 0 and j >= 0 and i < x and j < y and matrix[i][j] == 'A'); 
}

void run(int x, int y) {
  vis[x][y] = true;
  for(int i = 0; i < 4; i++) {
    int j = x+dx[i];
    int k = y+dy[i];
    if(!check(j,k)) continue;
    if(matrix[j][k] == 'A') {
      matrix[j][k] = 'T';
      run(j,k);
    }
  }
}

void solve() {
  for(int i = 0; i < x; i++) {
    for(int j = 0; j < y; j++) {
      char letter;
      cin >> letter;
      matrix[i][j] = letter;
      if(matrix[i][j] == 'T') {
        v.push_back({i,j});
      }
      vis[i][j] = false;
    }
  }
  auto it = v.begin();
  while(it != v.end()) {
    run((*it).first,(*it).second);
    it++;
  }
}

int main() {
  bool ok = false;
  cin >> x >> y;
  while(x != 0 and y != 0) {
    if(ok) cout << endl;
    ok = true;
    solve();
    for(int i = 0; i < x; i++) {
      for(int j = 0; j < y; j++) {
        cout << matrix[i][j];
      }
      cout << endl;
    }
    cin >> x >> y;
    v.clear();
  }
}
