#include<bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

void inraketqua(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m], c[n];
	multiset<int> ms;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		c[i] = a[i];
	}
	sort(c, c + n);
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	int cnt = 0;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(b[i] == c[j]){
				cout << c[j] << " ";
				c[j] = -1;
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(c[i] > 0) cout << c[i] << " ";
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
