#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	vector<int> b;
	vector<vector<int> > a(n, vector<int> (n));
	vector<vector<int> > res(n, vector<int> (n));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			b.push_back(a[i][j]);
		}
	}
	sort(b.begin(), b.end());
	int d = 0, x = 0, hang = n - 1, cot = n - 1, i;
	while(x < n * n){
		for(i = d; i <= cot; i++){
			res[d][i] = b[x++];
		}
		for(i = d + 1; i <= hang; i++){
			res[i][cot] =  b[x++];
		}
		if(d != hang){
			for(i = cot - 1; i >= d; i--){
				res[hang][i] = b[x++];
			}
		}
		if(d != cot){
			for(i = hang - 1; i >= d + 1; i--){
				res[i][d] = b[x++];
			}
		}
		d++;
		hang--;
		cot--;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	inraketqua();
	return 0;
}
