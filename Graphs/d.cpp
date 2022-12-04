#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() {
  int x,y; cin >> x >> y;
  vector<pair<double,string>> v;
  while(x--) {
    string s;
    double n;
    cin >> s >> n;
    v.push_back({n,s});
  }
  sort(v.begin(),v.end());
  auto it = v.end()-1;
  set<pair<string,double>> ans;
  while(y--) {
    ans.insert({(*it).second, (*it).first});
    it--;
  }
  for(auto k : ans) cout << k.first << endl;
}
