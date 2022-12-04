#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

const int N = 21;
int g[N];

int main () { _
  int n; cin >> n;
  int aux = n;
  for(int i = 1; i <= n; i++) {
    g[i] = 0;
  }
  n--;
  while(n--) {
    int v1,v2; cin >> v1 >> v2;
    g[v1]++; g[v2]++;
  }
  int bigger = 1;
  for(int i = 2; i <= aux; i++) {
    if(g[i] > g[bigger]) bigger = i;
  } 
  cout << bigger << endl;
}
