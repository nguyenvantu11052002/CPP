#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int L[n], R[n];
	for(int i = 0; i < n; i++){
		L[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[i] > a[j] && L[i] < L[j] + 1){
				L[i] = L[j] + 1;
			}
		}
	}
	for(int i = n - 1; i >= 0; i--){
		R[i] = 1;
		for(int j = n - 1; j > i; j--){
			if(a[i] > a[j] && R[i] < R[j] + 1){
				R[i] = R[j] + 1;
			}
		}
	}
	int res = 0;
	for(int i = 0; i < n; i++){
		res = max(res, L[i] + R[i] - 1);
	}
	cout << res << endl;
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
