#include <bits/stdc++.h>
using namespace std;

// @ Valid Parentheses

class Solution {
public:
    bool isValid(string s) {
        
        unordered_map<char,int> unmap{
        	{'(',1},
        	{'{',2},
        	{'[',3},
        	{')',-1},
        	{'}',-2},
        	{']',-3},
        };

    	vector<int> open;
    
    	for(int i = 0; i < s.size(); i++){
    		if(unmap[s[i]] > 0)
    			open.push_back(unmap[s[i]]);
    		else{
    			if(open.empty())
    				return false;
    			else{
	    			if(unmap[s[i]]*(-1) == open[open.size()-1]){
	    				open.pop_back();
	    			}else{
	    				return false;
	    			}
    			}
    		}
    	}

    	return open.empty();
    }
};

int main(){

	Solution stl;
	string s = "]";

	if(stl.isValid(s))
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;

}