#include<bits/stdc++.h>
 
using namespace std;

int klg[1001], gtri[1001];
int dp[1001][1001];
void TC(){
	int n, w;
	cin >> n >> w;
	for(int i = 1; i <= n; i++){
		cin >> klg[i];
	}
	for(int j = 1; j <= n; j++){
		cin >> gtri[j];
	}
	memset(dp, 0, sizeof(dp)); // dp[i][j] : gia tri dang co khi mang them do vat thu i va khoi luong co the mang them la j;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= w; j++){
			if(klg[i] > j){
				dp[i][j] = dp[i - 1][j]; // khong mang them duoc do vat thu i;
			}
			else{
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - klg[i]] + gtri[i]);
			}
		}
	}
	cout << dp[n][w] << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}


