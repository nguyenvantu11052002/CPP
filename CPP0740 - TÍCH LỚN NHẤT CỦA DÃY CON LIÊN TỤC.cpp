#include<bits/stdc++.h>

using namespace std;

long long res(int a[], int n){
	long long maxpro = LLONG_MIN;
	for(int i = 0; i < n; i++){
		long long tich = 1;
		for(int j = i; j < n; j++){
			tich *= a[j];
			maxpro = max(maxpro, tich);
		}
	}
	return maxpro;
}

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << res(a, n) << endl;
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
