#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	for(int i = 0; i < n; i++){
		auto it = upper_bound(b, b + n, a[i]);
		if(it == (b + n)){
			cout << "_" << " ";
		}
		else cout << *it << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
