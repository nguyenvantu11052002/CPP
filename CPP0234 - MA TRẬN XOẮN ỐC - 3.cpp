#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<int> > a(n, vector<int> (m));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	vector<int> b;
	int d = 0, x = 0, hang = n - 1, cot = m - 1, i;
	while(x < m * n){
		for(i = d; i <= cot; i++){
			b.push_back(a[d][i]);
			x++;
		}
		for(i = d + 1; i <= hang; i++){
			b.push_back(a[i][cot]);
			x++;
		}
		if(d != hang){
			for(i = cot - 1; i >= d; i--){
				b.push_back(a[hang][i]);
				x++;
			}
		}
		if(d != cot){
			for(i = hang - 1; i >= d + 1; i--){
				b.push_back(a[i][d]);
				x++;
			}
		}
		d++;
		hang--;
		cot--;
	}
	cout << b[k - 1] << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
