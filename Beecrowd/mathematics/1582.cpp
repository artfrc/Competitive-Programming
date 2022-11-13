#include <bits/stdc++.h>
using namespace std;

int ehTriplaPitag(int x, int y, int z){

	if(x*x == (y*y) + (z*z))
		return 1;
	else if(y*y == (x*x) + (z*z))
		return 1;
	else if(z*z == (y*y) + (x*x))
		return 1;
	else
		return 0;

}

int gcd(int a, int b){

	return __gcd(a,b);

}

int main(){

	int x,y,z;
	while(cin >> x >> y >> z){
	
		if(ehTriplaPitag(x,y,z)){

			int gcdAns = gcd(x,y); 

			if(gcdAns == gcd(x,z) && gcdAns == gcd(y,z)){
				if(gcdAns == 1)
					cout << "tripla pitagorica primitiva\n";
				else{
					cout << "tripla pitagorica\n";
				}
			}
		}else{
			cout << "tripla\n";
		}

	}

}	