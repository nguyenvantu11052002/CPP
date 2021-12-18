#include<bits/stdc++.h>

using namespace std;

long long solve(int a[], int n, int b[], int m){
	long long res = 0;
	long long t = 0;
	for(int i = 0; i < n; i++){
		t += a[i];
		int k = 0;
		for(int j = i + 1; j < m; j++){
			k += b[j];
		}
		if(k + t > res) res = k + t;
	}
	return res;
}

void inraketqua(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	long long TH1 = solve(a, n, b, m);  // day nhieu so hon for truoc
	long long TH2 = solve(b, m, a, n);  // day it so hon for truoc
	long long result = max(TH1, TH2);
	//cout << TH1 << " " << TH2 << endl;
	cout << result << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
