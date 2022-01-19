
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	int n, m;
	cin >> n >> m;
	vector<vector<int> > a(n, vector<int> (m));
	vector<vector<int> > b(n, vector<int> (m, 0));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){						 	//  1 0 0 1
			if(a[i][j] == 1){								//  0 0 1 0
				for(int k = 0; k < m; k++) b[i][k] = 1;		//  0 0 0 0
				for(int l = 0; l < n; l++) b[l][j] = 1;
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
