#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s;
	cin >> s;
	int k;
	cin >> k;
	int n = s.size();
	if(n < 26){
		cout << 0 << endl;
		return;
	}
	if(k >= 26){
		cout << 1 << endl;
		return;
	}
	vector<char> v;
	for(int i = 0; i < n; i++){
		int check = 1;
		for(int j = 0; j < v.size(); j++){
			if(s[i] == v[j]){
				check = 0;
				break;
			}
		}
		if(check == 1) v.push_back(s[i]);
	}
	int sokitucanthay = 26 - v.size();
	if(k >= sokitucanthay) cout << 1;
	else cout << 0;
	cout << endl;
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
