#include<bits/stdc++.h>

using namespace std;

int check(string s){
	if(s.size() == 1) return 0;
	string res = s;
	reverse(s.begin(), s.end());
	if(res != s) return 0;
	return 1;
}

bool cmp(pair<string, int> a, pair<string, int> b){
	if(a.first.size() == b.first.size()) return a.first > b.first;
	return a.first.size() > b.first.size();
}
void inraketqua(){
	map<string, int> mp;
	string s;
//	int k = 37;
	while(cin >> s){
		if(check(s)){
			mp[s]++;
		}
	}
	vector<pair<string, int>> v;
	for(auto x : mp){
		v.push_back({x.first, x.second});
	}
	sort(v.begin(), v.end(), cmp);
	for(auto x : v){
		cout << x.first << " " << x.second << endl;
	}
}

int main(){
	inraketqua();
	return 0;
}
