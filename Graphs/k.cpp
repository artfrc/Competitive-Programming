#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

int const N = 13;
vector<int> g[N];
int dist[N], n, aux;

void bfs(int v) {
  for(int i = 0; i < n; i++) {
    dist[i] = -1;
  }
  queue<int> q;
  q.push(v);
  dist[v] = 0;
  int a;
  while(!q.empty()) {
    a = q.front();
    q.pop();
    for(auto adj : g[a]) {
      if(dist[adj] == -1) {
        dist[adj] = dist[a]+1;
        q.push(adj);
      }
    }
  }
}

int main() { _
  cin >> aux;
  n = aux;
  aux--;
  while(aux--) {
    int v1,v2; cin >> v1 >> v2;
    g[v1].push_back(v2);
    g[v2].push_back(v1);
  }
  
  int i = 0;
  bool ok = false;
  while(i < n) {
    bfs(i);
    i++;
    int sum = 0;
    for(int i = 0; i < n; i++)
      sum += dist[i];
    if(ok) cout << " ";
    ok = true;
    cout << sum;
  }
  cout << endl;
}

