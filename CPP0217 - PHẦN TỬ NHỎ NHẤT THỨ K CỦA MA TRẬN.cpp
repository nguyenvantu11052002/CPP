#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n, k;
	cin >> n >> k;
	vector<vector<int> > a(n, vector<int> (n));
	vector<int> b;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			b.push_back(a[i][j]);
		}
	}
	sort(b.begin(), b.end());
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
