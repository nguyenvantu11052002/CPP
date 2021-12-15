#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int i = 0, j = 0;
	int k = 0;
	bool doichieu = true;
	while(k < m * n){
		// in tu duoi len tren;
		if(doichieu){
			for(; i >= 0 && j < m; i--, j++){
				cout << a[i][j] << " ";
				k++;
			}
			if(i < 0 && j <= m - 1){ // neu khong chan dieu kien j <= m - 1 thi truong hop ca i quas va j quas khi do o buoc nay i = 0, xuong dong 27 tiep tuc j quas lai cho i tang 2 dong la sai;
				i++;              
			}
			if(j == m){
				i += 2;
				j--;
			}
		}
		// in tu tren xuong duoi;
		else{
			for(; j >= 0 && i < n; j--, i++){
				cout << a[i][j] << " ";
				k++;
			}
			if(j < 0 && i <= n - 1){
				j = 0;
			}
			if(i == n){
				j += 2;
				i--;
			}
		}
		doichieu = !doichieu;
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
