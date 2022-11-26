#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  cin.ignore();
  int n; cin >> n;
  while(n--) {
    string aux;
    cin >> aux;
    size_t found = s.find(aux);
    if(found != string::npos) cout << 1 << endl;
    else cout << 0 << endl;
  }
}
