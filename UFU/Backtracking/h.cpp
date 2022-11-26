#include <bits/stdc++.h>
using namespace std;

int v[1001] = {0};

int main() {
  int n;
  while(cin >> n) {
    v[n]++;
  }
  for(int i = 1000; i > 0; i--) {
    if(v[i]) cout << i << " " << v[i] << endl;
  }
}

/*
Input test 1:
20
5
9
18
9

Input test 2:
14
14
26
14
26
11
*/
