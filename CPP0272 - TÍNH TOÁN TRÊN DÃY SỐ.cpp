#include<bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

long long powmod(long long a, long long b){
	long long res = 1;
	while(b){
		if(b % 2 == 1){
			res *= a;
			res %= mod;
		}
		a *= a;
		a %= mod;
		b /= 2;
	}
	return res;
}

void inraketqua(){
	int n;
	cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	long long h = 1;
	for(int i = 0; i < n; i++){
		h = (h * a[i]) % mod;
	}
	long long g = a[0]; // chu y truong hop n = 1 mang chi co 1 phan tu thi de g = gcd(a0, a1) la sai;
	for(int i = 1; i < n; i++){
		g = __gcd(g, a[i]);
	}
	cout << powmod(h, g) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
