#include <bits/stdc++.h>
using namespace std;

int main(){
	
	double m,j,c;
	cin >> m >> j >> c;
	int months = 0;
	int year;
	int M = 0;
	while(M < c){
		M += M*(j/100);
		months++;
		M += m;
		cout << M << endl;
	}


	if(months >= 12){
		year = months/12;
		months -= 12*year;	
		cout << year << " ano(s)";
		if(months > 0){
			cout << " e " << months << " mes(es)\n";		
		}else cout << endl;
	}else{
		cout << months << " mes(es)\n";
	}

}
