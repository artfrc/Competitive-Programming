#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; 
  while(cin >> n) {
    int m1,m2,m3;
    m1 = 1; m2 = 2; m3 = 3;
    bool ok = false;
    while(m3 <= n/2) {
      if(m1*m2*m3 == n) {
        cout << m1 << " " << m2 << " " << m3 << endl;
        ok = true;
        break;
      }
      m1++; m2++; m3++;
    }
    if(!ok) cout << "mensagem apagada" << endl;  
  }
}
