#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		int suma = 0, sumb = 0, k = 0;
		for(int j = i; j < n; j++){
			suma += a[j];
			sumb += b[j];
			k++;
			if(suma == sumb && k > ans){
				ans = k;
			}
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
