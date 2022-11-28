#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while(n != 0) {
    vector<int> v;
    int temp = 0;
    int ant;
    bool ok = true;
    while(n--) {
      int x; cin >> x;
      if(ok) {
        temp += 10;
        ok = false;
      }
      else {
        if(abs(x-ant) > 10) {
          temp += 10;
        } else {
          temp += abs(x-ant);
        }
      }
        ant = x;
    }
    cout << temp << endl;
    cin >> n;
  }
}
