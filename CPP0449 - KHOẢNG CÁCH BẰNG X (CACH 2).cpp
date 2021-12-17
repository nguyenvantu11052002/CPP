#include <bits/stdc++.h>
using namespace std;

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
		else if(binary_search(a, a + n, a[i] + x)){
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
