#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n, k;
	cin >> n >> k;
	int a[n];
	int s = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] <= k) s++;
	}
	int b = 0;
	for(int i = 0; i < s; i++){
		if(a[i] > k) b++;
	}
	int ss = b;
	for(int i = 0, j = s; j < n; i++, j++){
		if(a[i] > k) b--;
		if(a[j] > k) b++;
		ss = min(ss, b);
	}
	cout << ss << endl;
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
