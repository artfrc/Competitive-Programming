#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        
    	unordered_map<char,int> umap{
    		{'I',1},
    		{'V',5},
    		{'X',10},
    		{'L',50},
    		{'C',100},
    		{'D',500},
    		{'M',1000},
    	};

    	int ans = 0, i = 0;

    	for(i = 0; i < s.size(); ++i){
    		if(umap[s[i]] < umap[s[i+1]])
    			ans -= umap[s[i]];
    		else
    			ans += umap[s[i]];
    	}

    	return ans;

    }
};

int main(void){

	Solution stl;

	string s;
	cin >> s;

	cout << stl.romanToInt(s) << endl;

}