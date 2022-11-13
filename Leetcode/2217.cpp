#include <bits/stdc++.h>
using namespace std;

/*

    @Find Palindrome With Fixed Length

*/

class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
        
        sort(queries.begin(),queries.end());
        vector<int>::iterator it = queries.begin();
        vector<long long> ans;

        int counter = 0;
        double n, limit = pow(10,intLength);

        for(n = pow(10,intLength-1); n < limit && it != queries.end(); ++n){
            stringstream ss;
            string s;
            ss << n;
            s = ss.str();
            string aux = s;
            reverse(s.begin(),s.end());
            if(s == aux){
                counter++;
                if(counter == *it){
                    ans.push_back(stoi(aux));
                    it++;
                }
            }
        }

        return ans;

    }
};

int main(void){

    Solution stl;

    vector<int> v = {2,4,6};
    vector<long long> ans;
    int length = 4, n;

    ans = stl.kthPalindrome(v,length);

    for(auto x : ans)
        cout << x << endl;

}