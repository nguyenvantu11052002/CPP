#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	vector<pair<int, int> > v;
	for(auto x : mp){
		v.push_back({x.first, x.second});
	}
	sort(v.begin(), v.end(), cmp);
	for(auto x : v){
		for(int i = 0; i < x.second; i++){
			cout << x.first << " ";
		}
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
