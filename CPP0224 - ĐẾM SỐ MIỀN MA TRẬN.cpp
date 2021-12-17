#include<bits/stdc++.h>

using namespace std;

int n, m;
int a[101][101];
int vs[101][101];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void lantoa(int i, int j){
	vs[i][j] = 1;
	for(int x = 0; x < 8; x++){
		int i1 = i + dx[x];
		int j1 = j + dy[x];
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && vs[i1][j1] == 0 && a[i1][j1] == 1){
			lantoa(i1, j1);
		}
	}
}

void inraketqua(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int res = 0;
	memset(vs, 0, sizeof(vs));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(vs[i][j] == 0 && a[i][j] == 1){
				res++;
				lantoa(i, j);
			}
		}
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

