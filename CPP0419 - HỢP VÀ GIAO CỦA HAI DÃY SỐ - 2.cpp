#include<bits/stdc++.h>
using namespace std; 

void inraketqua(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	set<int> s, sm;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		s.insert(a[i]);
	}
	int k = 0;
	for(int i = 1; i <= m; i++){
		cin >> b[i];
		s.insert(b[i]);
		if((n + i - s.size()) != k){
			sm.insert(b[i]);
			k++;
		}
	}
	for(auto x : s) cout << x << " ";
	cout << endl;
	for(auto x : sm) cout << x << " ";
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
