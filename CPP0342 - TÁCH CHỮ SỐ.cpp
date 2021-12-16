#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s;
	cin >> s;
	int res = 0;
	for(int i = 0; i < s.size(); i++){
		if(isdigit(s[i])){
			res = res + (s[i] - '0');
		}
	}
	vector<char> v;
	for(int i = 0; i < s.size(); i++){
		if(!isdigit(s[i])) v.push_back(s[i]);
	}
	sort(v.begin(), v.end());
	for(auto x : v){
		cout << x;
	}
	cout << res << endl;
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

