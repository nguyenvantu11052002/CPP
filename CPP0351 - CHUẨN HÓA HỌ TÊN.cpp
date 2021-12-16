#include<bits/stdc++.h>

using namespace std;

void chuanhoa(string &s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}	
}

void inraketqua(){
	int n;
	cin >> n;
	cin.ignore();
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string token;
	while(ss >> token){
		v.push_back(token);
	}
	int m = v.size();
	for(int i = 0; i < m; i++){
		chuanhoa(v[i]);
	}
	if(n == 1){
		cout << v[m - 1] << " ";
		for(int i = 0; i < m - 1; i++){
			cout << v[i];
			if(i != m - 2) cout << " ";
		}
	}
	else{
		for(int i = 1; i < m; i++){
			cout << v[i] << " ";
		}
		cout << v[0];
	}
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
