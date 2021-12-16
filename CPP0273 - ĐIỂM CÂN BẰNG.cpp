#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n], b[n]; // mang cong don b;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	for(int i = 1; i < n; i++){
		b[i] += b[i - 1];
	}
	for(int i = 0; i < n; i++){
		if(b[i - 1] == b[n - 1] - b[i]){
			cout << i + 1 << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
