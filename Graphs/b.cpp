#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() {
  string s;
  getline(cin,s);
  stringstream ss;
  ss << s;
  int ans = 0;
  bool flag = false, found = false;
  while(ss >> s) {
    string aux = s;
    reverse(aux.begin(), aux.end());
    if(aux != s or s.size() < 3) {
      found = true;
      if(flag) cout << " ";
      cout << ans+1;
      flag = true;
    }
    ans++;
  }
  if(!found) cout << 0 << endl;
  else cout << endl;
}
