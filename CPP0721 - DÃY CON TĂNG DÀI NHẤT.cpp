#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int lis[n];
	for(int i = 0; i < n; i++){
		lis[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[i] > a[j]){
				lis[i] = max(lis[i], lis[j] + 1);
			}
		}
	}
	cout << *max_element(lis, lis + n) << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
