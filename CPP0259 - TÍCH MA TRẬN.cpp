#include<bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;

void inraketqua(){
	int n, m, p;
	cin >> n >> m >> p;
	vector<vector<int> > a(n, vector<int> (m));
	vector<vector<int> > b(m, vector<int> (p));
	vector<vector<int> > c(n, vector<int> (p));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			cin >> b[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			c[i][j] = 0;
			for(int k = 0; k < m; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	inraketqua();
	return 0;
}
