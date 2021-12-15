#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	long long f[n];
	for(int i = 0; i < n; i++){
		f[i] = a[i];
		for(int j = 0; j < i; j++){
			if(a[i] > a[j] && f[i] < f[j] + a[i]){
				f[i] = f[j] + a[i];
			}
		}
	}
	cout << *max_element(f, f + n) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
