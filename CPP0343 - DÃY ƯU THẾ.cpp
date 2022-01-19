#include<bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;

int checkeven(vector<string> v, int m){
	int even = 0, odd = 0;
	if(m % 2 != 0) return 0;
	for(int i = 0; i < m; i++){
		int p = v[i].size() - 1;
		int d = v[i][p] - '0';
		if(d % 2 == 0) even++;
		else odd++;
	}
	if(even > odd) return 1;
	return 0;
}

int checkodd(vector<string> v, int m){
	int even = 0, odd = 0;
	if(m % 2 == 0) return 0;
	for(int i = 0; i < m; i++){
		int p = v[i].size() - 1;
		int d = v[i][p] - '0';
		if(d % 2 == 0) even++;
		else odd++;
	}
	if(even < odd) return 1;
	return 0;
}

void inraketqua(){
	string s, str;
	getline(cin, str);
	vector<string> v;
	stringstream ss(str);
	while(ss >> s){
		v.push_back(s);
	}
	int m = v.size();
	if(checkeven(v, m) || checkodd(v, m)) cout << "YES";
	else cout << "NO";
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	cin.ignore();
	while(k--){
		inraketqua();
	}
	return 0;
}
