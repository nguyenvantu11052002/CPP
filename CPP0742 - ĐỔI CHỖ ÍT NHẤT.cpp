#include<bits/stdc++.h>
 
using namespace std;
 
bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}
 
void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	vector<pair <int, int> > v(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		v[i].first = a[i];
		v[i].second = i;
	}
	int cnt = 0;
	sort(v.begin(), v.end(), cmp);
	for(int i = 0; i < n; i++){
		while(v[i].second != i){
			cnt++;
			swap(v[i], v[v[i].second]);
		}
	}
	cout << cnt << endl;
}
 
int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
