#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

int n;
int a = 25;

double long fat(int x) {
  if(x == 0) return 1;
  a--;
  return a*(fat(x-1));
}

int main() {
  cin >> n;
  cout << fixed << setprecision(0) << fat(n-2) << endl;
}

