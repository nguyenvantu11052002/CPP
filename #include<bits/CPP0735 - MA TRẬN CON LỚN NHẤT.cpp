#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n, m;
	cin >> n >> m;
	int res[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> res[i][j];
		}
	}
	int ress = INT_MIN;
	for(int i = 1; i < n; i++){
		for(int j = 1; j < m; j++){
			if(res[i][j] == 1){
				res[i][j] = min(res[i][j - 1], min(res[i - 1][j], res[i - 1][j - 1])) + 1;
				ress = max(ress, res[i][j]);
			}
		}
	}
	cout << ress << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

