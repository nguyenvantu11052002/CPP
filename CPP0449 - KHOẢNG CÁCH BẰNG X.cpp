#include <bits/stdc++.h>
using namespace std;

int bs(int a[], int l, int r, int x){
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] == x) return 1;
		else if(a[m] > x) r = m - 1;
			 else l = m + 1;
	}
	return 0;
}

void inraketqua(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++){
		if(a[i] + x > a[n - 1]) break;
		else if(bs(a, 0, n - 1, a[i] + x)){
			cout << 1 << endl;
			return;
		}
	}
	cout << -1 << endl;
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
