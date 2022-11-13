#include <bits/stdc++.h>
using namespace std;

/*

	@Palindrome Number

*/
	class Solution {
public:
    bool isPalindrome(int x) {

    	stringstream ss;

    	ss << x;
    	string s = ss.str();
        string aux = s;
        reverse(aux.begin(),aux.end());

    	if(s == aux){
    		return true;
    	}
    	else{
    		return false;
    	}

    }
};

int main(void){

	Solution slt;
	int x;
	cin >> x;

	if(slt.isPalindrome(x))
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;

}