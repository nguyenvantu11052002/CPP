#include<bits/stdc++.h>

using namespace std;

int so(char c){
	return c - '0';
}

void inraketqua(){
	int m, n;
	string s;
	cin >> m >> n >> s;
	long long dp[m][n];
	memset(dp, 0, sizeof(dp));
	dp[0][so(s[0]) % n]++;
	for(int i = 1; i < m; i++){
		dp[i][so(s[i]) % n]++;
		for(int j = 0; j < n; j++){
			dp[i][j] += dp[i - 1][j];
			dp[i][(j * 10 + so(s[i])) % n] += dp[i - 1][j];
		}
	}
	cout << dp[m - 1][0] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
