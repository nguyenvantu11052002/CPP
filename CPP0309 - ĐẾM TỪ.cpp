#include <bits/stdc++.h>
using namespace std;

void inraketqua(){
	string s, str;
	getline(cin, str);
	stringstream ss(str);
	int count = 0;
	while(ss >> s){
		count++;
	}
	cout << count << endl;
}

int main(){
	int k;
	cin >> k;
	cin.ignore();
	while(k--){
		inraketqua();
	}
	return 0;
}
