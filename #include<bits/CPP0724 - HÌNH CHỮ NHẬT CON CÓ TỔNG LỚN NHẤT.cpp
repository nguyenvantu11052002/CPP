#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll kanade(ll tmp[], int n){
	ll res = 0;
	ll res1 = 0;
	for(int i = 0; i < n; i++){
		res1 += tmp[i];
		res = max(res, res1);
		if(res1 < 0) res1 = 0;
	}
	return res;
}

void inraketqua(){
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	ll tmp[n];
	ll res = LLONG_MIN;
	for(int l = 0; l < m; l++){
		memset(tmp, 0, sizeof(tmp));
		for(int i = l; i < m; i++){
			for(int j = 0; j < n; j++){
				tmp[j] += a[j][i];
			}
			res = max(res, kanade(tmp, n));
		}
	}
	cout << res << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
