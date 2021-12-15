#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	char a[n][n];
	int hang[n][n];
	int cot[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			if(a[i][j] == 'X'){
				hang[i][j] = 1;
				cot[i][j] = 1;
			}
			else{
				hang[i][j] = 0;
				cot[i][j] = 0;
			}
		}
	}
	/* theo de bai X X  thi in ra 2 nen khong can phai check O trong vong tron X nua;
	           X X   */
	
	// don hang dem x sang ben phai;  i  va  j + 1  
	for(int i = 0; i < n; i++){
		for(int j = 1; j < n; j++){
			if(hang[i][j] == 0) continue;
			else hang[i][j] += hang[i][j - 1];
		}
	}
	// don cot dem x xuong duoi; i + 1 va j
	for(int j = 0; j < n; j++){
		for(int i = 1; i < n; i++){
			if(cot[i][j] == 0) continue;
			else cot[i][j] += cot[i - 1][j];
		}
	}
	/* in hang xem thu;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << hang[i][j] << " ";
		}
			cout << endl;
	}
	// in cot xem thu;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << cot[i][j] << " ";
		}
		cout << endl;
	}	*/
	// xet tu phan tu thu n - 1 ; n - 1 cua ma tran; vi ta da don het sang phai va xuong duoi;
	int res = INT_MIN;
	for(int i = n - 1; i >= 0; i--){
		for(int j = n - 1; j >= 0; j--){
			int nn = min(cot[i][j], hang[i][j]);
			while(nn > res){
				if(hang[i - nn + 1][j] >= nn && cot[i][j - nn + 1] >= nn){
					res = nn;
				}
				else{
					nn--;
				}
			}
		}
	}
	cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

