#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
  string s;
  getline(cin,s);
  stringstream ss;
  ss << s;
  int i = 0,d,m,a;
  float c,j;
  while(ss >> s) {
    i++;
    if(i == 1) c = stof(s);
    else if(i == 2) {
      string aux = "";
      for(int k = 0; s[k] != '%'; k++) {
        aux += s[k];
      }
      j = stof(aux);
    } else if(i == 3) d = stof(s);
    else if(i == 4) m = stof(s);
    else a = stof(s);
  }
  cout << fixed << setprecision(4);
  double dias = pow(1.+(j/100),d);
  cout << "a.d = " << c*dias << endl;
  
  double meses = pow(1.+(j/100),m);
  cout << "a.m = " << c*meses << endl;
  
  double anos = pow(1.+(j/100),a);
  cout << "a.a = " << c*anos << endl;
}
