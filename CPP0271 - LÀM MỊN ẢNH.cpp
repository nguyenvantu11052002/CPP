#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n, m, l;
	cin >> n >> m >> l;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int b[n - l + 1][m];
	// don hang , giu co dinh tung cot sau do cong don xuong duoi;
	for(int j = 0; j < m; j++){
		for(int i = 0; i < n - l + 1; i++){
			if(i == 0){
				b[i][j] = 0;
				for(int k = 0; k < l; k++){
					b[i][j] += a[k][j];
				}
			}
			else{
				b[i][j] = b[i - 1][j] + a[i + l - 1][j] - a[i - 1][j]; // hieu la i dang o hang 1;
			}
		}
	}
	int c[n - l + 1][m - l + 1];
	//don cot, giu co dinh tung hang sau do cong don cac cot tu trai sang phai;
	for(int i = 0; i < n - l + 1; i++){
		for(int j = 0; j < m - l + 1; j++){
			if(j == 0){
				c[i][j] = 0;
				for(int k = 0; k < l; k++){
					c[i][j] += b[i][k];
				}
			}
			else{
				c[i][j] = c[i][j - 1] + b[i][j + l - 1] - b[i][j - 1]; // hieu la j dang o cot 1;
			}
		}
	}	
	// da co ma tran c bay gio in ra la ok;
	for(int i = 0; i < n - l + 1; i++){
		for(int j = 0; j < m - l + 1; j++){
			cout << c[i][j] / (l * l) << " ";
		}
		cout << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
