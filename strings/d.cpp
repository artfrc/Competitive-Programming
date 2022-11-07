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


int main(void){

	int ano1,mes1,dia1;
	int ano2,mes2,dia2;

	scanf("%d-%d-%d %d-%d-%d", &ano1,&mes1,&dia1,&ano2,&mes2,&dia2);

/*
	map<int,int> mp;
	mp.insert(1,31);
	mp.insert(3,31);
	mp.insert(4,30);
	mp.insert(5,31);
	mp.insert(6,30);
	mp.insert(7,31);
	mp.insert(8,30});
	mp.insert(9,31});
	mp.insert(10,30);
	mp.insert(11,31);
	mp.insert(12,30);
*/
	if(leap_year(year)){
		mp.insert(2,29);		
		
	}else{
		mp.insert(2,28);
	}
}
