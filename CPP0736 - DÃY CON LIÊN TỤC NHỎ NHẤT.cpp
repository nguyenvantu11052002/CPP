#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	long long x;
	cin >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	long long sum = 0;
	int l = 0, res = 1e9;
	for(int r = 0; r < n; r++){
		sum += a[r];
		while(sum > x){
			res = min(res, r - l + 1);
			sum -= a[l];
			l++;
		}
	}
	if(res == 1e9) cout << -1 << endl;
	else cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

