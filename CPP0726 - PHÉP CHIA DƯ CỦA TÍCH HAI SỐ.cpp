#include<bits/stdc++.h>

using namespace std;

long long Mul(long long a, long long b, long long c){
	if(b == 0) return 0;
	long long tmp = Mul(a, b/2, c);
	if(b & 1) return (2 * tmp + a) % c;
	return (2 * tmp) % c;
}

void inraketqua(){
	long long a, b, c;
	cin >> a >> b >> c;
	cout << Mul(a, b, c) << endl;
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
