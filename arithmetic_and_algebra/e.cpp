#include <bits/stdc++.h>
using namespace std;

bool leap_year(int y){
		
	if(y % 4 == 0){
		
		if(y % 100 == 0){
		
			if(y % 400 == 0) return true;
			else return false;

		}else return true;

	}else return false;	

}

int main(){

	int year;
	while(cin >> year){
		
		double discount = 0;
		double value = year;
		double count = 0;

		if(leap_year(year)){
			discount += 5;
			count++;
		}

		if(year % 10 == 0){
			discount += 10;
			count++;
		}
	
		if(year % 20 == 0){
			discount += 20;
			count++;
		}

		if(count > 1){
			discount = ceil(discount / count);
		}

		cout << fixed << setprecision(2) << year-((discount/100) * year) << endl;
		
	}

}
