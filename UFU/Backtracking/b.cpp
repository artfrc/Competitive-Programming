#include <bits/stdc++.h>
using namespace std;

string ToBinary(long long int n) {
  string ans = "";
  while(n > 0) {
    int rest = n%2;
    n /= 2;
    stringstream ss;
    ss << rest;
    string aux = ss.str();
    ans += aux;
  }
  reverse(ans.begin(),ans.end());
  return ans;
}

string ReverseNumber(long long int n) {
  string ans = "";
  while(n > 0) {
    int rest = n%10;
    n /= 10;
    stringstream ss;
    ss << rest;
    string aux = ss.str();
    ans += aux;
  }
  return ans;
}

int main() {
  int n; cin >> n;
  while(n--) {
    long long int x,y; cin >> x >> y;
    int count = 0;
    long long int sum = 0;
    while(x <= y) {
      stringstream ss;
      ss << x;
      string NumberConvert = ss.str();
      if(NumberConvert == ReverseNumber(x)) {
        string Binary = ToBinary(x);
        string RevBinary = Binary;
        reverse(RevBinary.begin(), RevBinary.end());
        if(Binary == RevBinary) {
          sum += x;
          count++;
        }
      }
      x++;
    }
    cout << sum << " " << count << endl;
  }
}
