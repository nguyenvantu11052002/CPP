#include<bits/stdc++.h>

using namespace std;

long long powmod(long long a, long long b, long long m){
	long long res = 1;
//	a %= m;
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

void inraketqua(){
	string a;
	long long b, m;
	cin >> a >> b >> m;
	long long res = 0;
	for(int i = 0; i < a.size(); i++){
		int d = a[i] - '0';
		res = (res * 10 + d) % m;
	}
	cout << powmod(res, b, m) << endl;
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
