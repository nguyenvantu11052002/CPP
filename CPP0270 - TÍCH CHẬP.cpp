#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int b[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> b[i][j];
		}
	}
	long long res = 0;
	for(int i = 0; i + 3 <= n; i++){
		for(int j = 0; j + 3 <= m; j++){
			long long x = 0;
			long long res1 = 0;
			for(int i1 = i; i1 < i + 3; i1++){
				for(int j1 = j; j1 < j + 3; j1++){
					x = a[i1][j1] * b[i1 - i][j1 - j];
					res1 += x;
				}
			}
			res += res1;
		}
	}
	cout << res << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
