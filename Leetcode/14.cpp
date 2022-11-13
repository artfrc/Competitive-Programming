#include <bits/stdc++.h>
using namespace std;

// @ Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int ans = 0, n = strs.size();

        for(int i = 1; i < n; i++){

        	int j = 0;
        	while(j < strs[i].size() && strs[i][j] == strs[0][j]) j++;
			
			ans = max(ans,j);

        }

        return strs[0].substr(0,ans);

    }
};

int main(void){

	Solution slt;
	vector<string> v = {"flower","flow","flight"};
	string s;

	cout << slt.longestCommonPrefix(v) << endl;

}