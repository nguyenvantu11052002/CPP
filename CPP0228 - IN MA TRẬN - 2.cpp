#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int m = 8 * n * n;
	int cuon1[m];
	cuon1[0] = m + 2 * n;
	int step = 2;
	int index = 1;
	int curr = cuon1[0];
	int doidau = 1;
	while(index < m){
		for(int i = 1; i <= step; i++){
			cuon1[index++] = curr - 4 * n * doidau;
			curr = curr - 4 * n * doidau;
			if(index >= m) break;
		}
		if(index >= m) break;
		for(int i = 1; i <= step; i++){
			cuon1[index++] = curr + doidau;
			curr = curr + doidau;
			if(index >= m) break;
		}
		if(index >= m) break;
		step += 2;
		doidau *= (-1);
	}
	int cuon2[m];
	for(int i = 0; i < m; i++){
		cuon2[i] = 2*m + 1 - cuon1[i];
	}
	for(int i = 0; i < m; i++){
		cout << cuon1[i] << " ";
	}
	cout << endl;
	for(int i = 0; i < m; i++){
		cout << cuon2[i] << " ";
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
