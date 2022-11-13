#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int brothers;
	cin >> brothers;
	double v[brothers] = {0};
	double total[brothers] = {0};
	double real[brothers] = {0};
	int pay = 0, i;	
	while(true){
		int n;
		double t = 0;
		i = 0;		
		cin >> n;
		if(n == -1) break;
		else{
			v[i] = n;	
			i++;
			t += n;
			for(i; i < brothers; ++i){
				cin >> n;
				v[i] = n;	
				t += n;			
			}
			double value;
			cin >> value;
			
			total[pay] += value;
			pay = (pay+1) % brothers;
			for(int k = 0; k < brothers; ++k){
				double x = (100*v[k])/t;				
				real[k] += (x * value)/100;		
			}
		}
	}

	for(i = 0; i < brothers; i++){
		double ans = total[i] - real[i];
		if(ans > 0)
			cout << "irmao " << i+1 << " recebe " << fixed << setprecision(2) << abs(ans) << endl;
		else if(ans < 0)
			cout << "irmao " << i+1 << " deve " << fixed << setprecision(2) << abs(ans) << endl;		
		else
			cout << "irmao " << i+1 << " recebe 0.00\n";
		
	}
	
}
