#include <bits/stdc++.h>
using namespace std;

const int sz = 1000;
int m[sz][sz];
int vis[sz][sz];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int steps = 1, okX, okY;
vector<pair<int,int>> p;

// Verifico se minha posição atual é válida
bool check(int x, int y, int mx, int my) {
  return (x >= 0 and x < mx and y >= 0 and y < my);
}

// Verifico se consigo andar para algum lugar (True se sim, False se não)
// Se sim, então eu seto a posição de onde consigo ir (okX, okY) e irei para ela na próxima chamada
bool stuck(int x, int y, int mx, int my) {
  for(int k = 0; k < 4; k++) {
    int i = x+dx[k];
    int j = y+dy[k];
    if(check(i,j,mx,my) and m[i][j] and !vis[i][j]) { okX = i; okY = j; return false; }
  }
  return true;
}

void solve(int x, int y, int mx, int my, int exitX, int exitY) {
  if(x == exitX and y == exitY) {
    return;
  }
  
  // Guardo a posição que estou no vector, pois caso eu precise voltar para ela, então estará guardada
  pair<int,int> p1;
  p1.first = x;
  p1.second = y;
  p.push_back(p1);
  
  vis[x][y] = 1;
  
  // Se estou preso, então volto para posição anterior e retiro um passo
  if(stuck(x,y,mx,my)) {
    p.pop_back();
    int newX, newY;
    newX = p.back().first;
    newY = p.back().second;
    p.pop_back();
    steps--;
    solve(newX,newY,mx,my,exitX,exitY);
  } else {
  // Se não estou preso, verifico o próximo caminho para prosseguir
      steps++;
      solve(okX,okY,mx,my,exitX,exitY);
  }
}

int main() {
  int x,y; cin >> x >> y;
  int beginX, beginY, exitX, exitY;
  for(int i = 0; i < x; i++) {
    for(int j = 0; j < y; j++) {
      cin >> m[i][j];
      vis[i][j] = 0;
      if(m[i][j] == 2) { beginX = i; beginY = j; }
      else if(m[i][j] == 3) { exitX = i; exitY = j; } 
    }
  }
  solve(beginX,beginY,x,y,exitX,exitY);
  cout << steps << endl;
}

/*
Input test:
4 4
1 1 1 1
2 0 0 1
0 0 0 1
3 1 1 1

4 6
0 0 1 1 1 0
0 0 1 0 2 1
0 0 0 0 0 1
0 0 3 1 1 1
*/

