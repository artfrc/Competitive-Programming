#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

const int N = 1001;
bool members[1001];

int main() { _
  vector<vector<int>> vv;
  vector<int> v;
  int m,n; cin >> m >> n;
  for(int i = 1; i <= m; i++) members[i] = false;
  int x,y; cin >> x >> y;
  v.push_back(x);
  v.push_back(y);
  members[x] = true; members[y] = true;
  vv.push_back(v);
  n--;
  v.clear();
  while(n--) {
    cin >> x >> y;
    bool ok = true;
    for(int i = 0; i < vv.size() and ok; i++) {
      auto it = vv[i].begin();
      while(it != vv[i].end()) {
        if(x == *it) {
          vv[i].push_back(y);
          members[x] = true;
          members[y] = true;
          ok = false;
          break;
        } else if(y == *it) {
          vv[i].push_back(x);
          members[x] = true;
          members[y] = true;
          ok = false;
          break;
        }
        it++;
      }
    }
    if(ok) {
      v.push_back(x);
      v.push_back(y);
      vv.push_back(v);
      v.clear();
    }
    v.clear();
  }
  int auxAns = 0;
  for(int i = 1; i <= m; i++) if(!members[i]) auxAns++;
  cout << vv.size()+auxAns << endl;
}
