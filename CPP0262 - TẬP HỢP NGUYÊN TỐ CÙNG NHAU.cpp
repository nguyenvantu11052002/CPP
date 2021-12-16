#include<bits/stdc++.h>

using namespace std;

int check(long long n, long long m){
	long long sumtong = (n * (n + 1))/2;
	if(sumtong < m) return 0;
	long long checksonguyen = (sumtong + m) % 2;
	if(checksonguyen != 0) return 0;
	long long suma = (sumtong + m) / 2;
	long long sumb = sumtong - suma;
	if(__gcd(suma, sumb) != 1) return 0;
	return 1;
}

void inraketqua(){
	long long n, m;
	cin >> n >> m;
	if(check(n, m)) cout << "Yes" << endl;
	else cout << "No" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
