#include<bits/stdc++.h>

using namespace std;

long long chiadu(string a, long long b){
	long long res = 0;
	for(int i = 0; i < a.size(); i++){
		int d = a[i] - '0';
		res = (res * 10 + d) % b;
	}
	return res;
}

long long solve(string a, long long b){
	long long x = chiadu(a, b);
	long long res = b;
	b = x;
	while(b > 0){
		x = res % b;
		res = b;
		b = x;
	}
	return res;
}

void inraketqua(){
	long long b;
	string a;
	cin >> b >> a;
	cout << solve(a, b) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

