#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

const int N = 10e5;
vector<int> g[N];
bool vis[N];

bool dfs(int v, int d) {
  vis[v] = true;
  for(auto adj : g[v]) {
    if(adj == d) return true;
    if(vis[adj]) continue;
    dfs(adj,d);
  }
  return false;
}


int main() {
  int n,a,o,d;
  cin >> n >> a >> o >> d;
  for(int i = 0; i < n; i++) {
    vis[i] = false;
  }
  while(a--) {
    int v1, v2;
    cin >> v1 >> v2;
    g[v1].push_back(v2);
    g[v2].push_back(v1);
  }
  if(dfs(o,d)) cout << "Verdadeiro" << endl;
  else cout << "Falso" << endl;
}
