#include<bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;

long long powmod(long long a, long long b, long long m){
	long long res = 1;
	a %= m;
	while(b){
		if(b % 2 == 1){
			res *= a;
			res %= m;
		}
		a *= a;
		a %= m;
		b /= 2;
	}
	return res;
}

long long reverse(long long a, long long m){ 
	return powmod(a, m - 2, m);
}

long long f[1000001];

void inraketqua(){
	int n, k;
	cin >> n >> k;
	f[0] = 1;
	for(int i = 1; i <= n; i++){
		f[i] = i * f[i - 1];
		f[i] %= mod;
	}
	long long res = (f[n] % mod * reverse(f[k] * f[n - k], mod)) % mod;
	cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
