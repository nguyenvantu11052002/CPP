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
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
	while(h1 < h2 && c1 < c2){
		int truoc = a[h1 + 1][c1];
		int luu;
		for(int i = c1; i <= c2; i++){
			luu = a[h1][i];
			a[h1][i] = truoc;
			truoc = luu;
		}
		h1++;
		for(int i = h1; i <= h2; i++){
			luu = a[i][c2];
			a[i][c2] = truoc;
			truoc = luu;
		}
		c2--;
		if(h1 <= h2){
			for(int i = c2; i >= c1; i--){
				luu = a[h2][i];
				a[h2][i] = truoc;
				truoc = luu;
			}
			h2--;
		}
		if(c1 <= c2){
			for(int i = h2; i >= h1; i--){
				luu = a[i][c1];
				a[i][c1] = truoc;
				truoc = luu;
			}
			c1++;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << a[i][j] << " ";
		}
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
