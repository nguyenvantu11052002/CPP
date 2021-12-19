#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(n == 1){
		cout << a[0] << endl;
		return;
	}
	if(n == 2){
		cout << max(a[0], a[1]) << endl;
		return;
	}
	long long b0 = a[0], b1 = a[1], b2 = a[0] + a[2];
	for(int i = 3; i < n; i++){
		long long b3 = a[i];
		if(b0 > b1) b3 += b0;
		else b3 += b1;
		b0 = b1;
		b1 = b2;
		b2 = b3;
	}
	long long res = max(b0, max(b1, b2));
	cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

