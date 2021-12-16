#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	int m;
	cin >> m;
	int b[m][m];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
			cin >> b[i][j];
		}
	}
	for(int i = 0; i < n; i += m){
		for(int j = 0; j < n; j += m){
			for(int i1 = i; i1 < i + m; i1++){
				for(int j1 = j; j1 <j + m; j1++){
					a[i1][j1] *= b[i1 - i][j1 - j];
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	inraketqua();
	return 0;
}

