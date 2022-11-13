#include <bits/stdc++.h>
using namespace std;

int main(){

	int pessoas, pulo;
	cin >> pessoas >> pulo;

	vector<int> v;

	for(int i = 1; i <= pessoas; ++i)
		v.push_back(i);

	vector<int>::iterator it = v.begin();

	int cont = 1;

	while(v.size() > 1){

		if(cont != pulo){
			cont++;
			if(it == v.end()-1)
				it = v.begin();
			else
				it++;
		}else{
			if(it == v.end()-1){
				v.erase(it);
				it = v.begin();
			}else{
				v.erase(it);
			}
			cont = 1;
		}

	}

	cout << v[0] << endl;

}