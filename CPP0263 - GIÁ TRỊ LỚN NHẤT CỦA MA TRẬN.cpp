#include<bits/stdc++.h>

using namespace std;

int n;
int a[405][405];
int chinh[405][405];
int phu[405][405];
void taomatranduongcheochinhvaphu(){
	// ma tran duong cheo chinh
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == 1 || j == 1) chinh[i][j] = a[i][j];
			else chinh[i][j] = a[i][j] + chinh[i - 1][j - 1];
		}
	}
	// ma tran duong cheo phu
	for(int i = 1; i <= n; i++){
		for(int j = n; j >= 1; j--){
			if(i == 1 || j == n) phu[i][j] = a[i][j];
			else phu[i][j] = a[i][j] + phu[i - 1][j + 1];
		}
	}
}

void inraketqua(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	taomatranduongcheochinhvaphu();
	int ans = INT_MIN;
	for(int i = n; i >= 1; i--){
		for(int j = n; j >= 1; j--){
			int tmp = min(i,j);
			int hang = i - tmp, cot = j - tmp;
			for(int k = 0; k < tmp; k++){
				ans = max(ans, chinh[i][j] - chinh[hang + k][cot + k] - (phu[i][cot + k + 1] - phu[hang + k][j + 1]));
			}
		}
	}
	cout << ans << endl;
}

int main(){
	int t = 1;
	while(t--){
		inraketqua();
	}
	return 0;
}
