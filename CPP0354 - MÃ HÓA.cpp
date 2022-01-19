#include<bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;

void inraketqua(){
	string s;
	cin >> s;
	int n = s.size();
	int dem = 1;
	s[n] = 'a';
	for(int i = 0; i < n; i++){
		if(s[i] == s[i + 1]) dem++;
		else{
			cout << s[i] << dem;
			dem = 1;
		}
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
