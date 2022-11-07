#include <bits/stdc++.h>
using namespace std;

int main(){

	string input;
	vector<string> s;

	while(getline(cin,input)){

		stringstream S(input);
		while(S >> input){
			for(int i = 0; i < input.size(); ++i){
				if(isalpha(input[i])){
					input[i] = tolower(input[i]);
				}else{
					if(i == 0)
						input.erase(i,i+1);
					else
						input.erase(i,i);
				}
			}

			vector<string>::iterator it;
			it = find(s.begin(),s.end(),input);
			if(it == s.end()){
				s.push_back(input);
			}
		}
	}
		sort(s.begin(),s.end());
		for(string y : s)
			cout << y << endl;
}