#include<bits/stdc++.h>

using namespace std;

char a[25][25];
int n, m;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void lantoa(int i, int j){
	a[i][j] = '*';
	for(int k = 0; k < 4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 'O'){
			lantoa(i1, j1);
		}
	}
}

void inraketqua(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	//hang dau va hang cuoi
	for(int i = 0; i < n; i++){
		if(i == 0 || i == n - 1){
			for(int j = 0; j < m; j++){
				if(a[i][j] == 'O') lantoa(i, j);
			}
		}
	}
	//cot dau va cot cuoi
	for(int j = 0; j < m; j++){
		if(j == 0 || j == m - 1){
			for(int i = 0; i < n; i++){
				if(a[i][j] == 'O') lantoa(i, j);
			}
		}
	}
	// den day thi cac chu O o 4 canh hcn da lan toa het kha nang, nhung chu O chua duoc lan toa den chinh la duoc bao quanh boi x, xung quanh toan la X nen O o bien khong lan toa den duoc
	// doi OOOOOOOOOOOOOO thanh X va doi **************** thanh O;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == 'O') a[i][j] = 'X';
			else if(a[i][j] == '*'){
				a[i][j] = 'O';
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

