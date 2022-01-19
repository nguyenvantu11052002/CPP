#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	vector<vector<int> > a(n, vector<int> (3));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
		}
	}
	int result = 0;
	for(int i = 0; i < n; i++){
		int so1 = 0;
		int so0 = 0;
		for(int j = 0; j < 3; j++){
			if(a[i][j] == 1) so1++;
			else so0++;
		}
		if(so1 > so0) result++;
	}
	cout << result;
}

int main(){
	inraketqua();
	return 0;
}


