#include<bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;

void nhan(long long a[2][2], long long b[2][2]){
	long long res[2][2];
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			res[i][j] = 0;
			for(int k = 0; k < 2; k++){
				res[i][j] += a[i][k] * b[k][j];
				res[i][j] %= mod;
			}
		}
	}
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			a[i][j] = res[i][j];
		}
	}
}

void fibo(long long n){
	long long res[2][2] = {{1, 0}, {0, 1}};
	long long a[2][2] = {{1, 1}, {1, 0}};
	while(n){
		if(n % 2 == 1){
			nhan(res, a);
		}
		nhan(a, a);
		n /= 2;
	}
	cout << res[0][1] << endl;
}

void solve(){
	long long n;
	cin >> n;
	fibo(n);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	while(k--){
		solve();
	}
	return 0;
}
