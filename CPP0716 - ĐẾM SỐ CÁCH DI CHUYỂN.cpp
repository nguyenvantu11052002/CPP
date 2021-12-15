#include<bits/stdc++.h>

using namespace std;

int a[25][25];
int i, j, n, k, cnt;
void solve(int TongTuA00DenAij, int i, int j){
	if(i == n - 1 && j == n - 1 && TongTuA00DenAij == k){
		cnt++;
	}
	if(i < n - 1 && TongTuA00DenAij <= k) solve(TongTuA00DenAij + a[i + 1][j], i + 1, j); // 2 dong if nay phai cho dau == tai k, vi + den a[i][j] == k nhung di theo huong khac(bai nay co 2 huong di xuong duoi hoac sang phai)
	if(j < n - 1 && TongTuA00DenAij <= k) solve(TongTuA00DenAij + a[i][j + 1], i, j + 1);// thi chua chac da == k, phai de quy cho no chay den phan tu cuoi cung a[n- 1][n- 1];
}

void inraketqua(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	cnt = 0;
	solve(a[0][0], 0, 0);
	cout << cnt << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
