#include<bits/stdc++.h>
 
using namespace std;
 
int solve(int x, int b[], int m, int cnt[]){
	int res = 0;
	if(x == 0) return 0;
	// x == 1 thi chi co truong hop bi = 0 la thoa man;
	if(x == 1){
		return cnt[0];
	}
	// bi = 1 || bi = 0 thi luon dung//
	res += (cnt[0] + cnt[1]);
	auto it = upper_bound(b, b + m, x) - b;
	res += (m - 1 - it + 1);
	if(x == 2){
		res -= (cnt[3] + cnt[4]); // 1 2 3 4 5 6 
	}
	if(x == 3){
		res += cnt[2];
	}
	return res;
}
 
void inraketqua(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	int cnt[5] = {0};
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
		if(b[i] <= 4) cnt[b[i]]++;
	}
	sort(b, b + m);
	long long res = 0;
	for(int i = 0; i < n; i++){
		res += solve(a[i], b, m, cnt);
	}
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
