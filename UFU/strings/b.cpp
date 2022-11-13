#include <bits/stdc++.h>
using namespace std;

bool HasComma(string x) {
	for (char u: x) {
		if (u == ',') return true;
	}
	return false;
}


int main(void){
	string msg;
	getline(cin, msg);
	vector<string> v;
	stringstream s(msg);
	string x;
	while (s >> x) {
		v.push_back(x);
	}

	// c_str: string -> char[]
    // stoi só funciona para char[]
	vector<int> numbers;
	string rest;
	for (string u: v) {
		if (!HasComma(u)) {
			numbers.push_back(stod(u.c_str()));
		} else {
			rest = u;
		}
	}
	for (int i = 0; i < rest.size(); ++i) {
		if (rest[i] == ',') rest[i] = ' ';
	}
	stringstream ss(rest);
	vector<string> last_info;
	while (ss >> x) {
		last_info.push_back(x);
	}	
	numbers.push_back(stoi(last_info[0].c_str()));
	int day = stoi(last_info[1].c_str());
	string sol = last_info[2];
	int graus = stoi(last_info[3].c_str());

	cout << "Numbers: ";
	for (int n: numbers) {
		cout << n << " ";
	}	
	cout << endl;
	cout << "Day: " << day << " Graus: " << graus << endl;
		

}
