#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() {
  int x,y; cin >> x >> y;
  bool aux = false;
  while(y >= x) {
    if(y % 3 == 0) {
      if(aux) cout << " ";
      aux = true;
      cout << y;
    }
    y--;
  }
  cout << endl;
}
