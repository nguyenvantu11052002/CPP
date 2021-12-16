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
	int tmp[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i == 0) tmp[i][j] = a[i][j];
			else if(a[i][j] == 1){
				tmp[i][j] = tmp[i - 1][j] + 1;
			}
			else tmp[i][j] = 0;
		}
	}
	for(int i = 0; i < n; i++){
		sort(tmp[i], tmp[i] + m, greater<int> ());
	}
	int areamax = 0;
	int areathanhphan = 0;
	for(int i = 0; i < n; i++){                    
		for(int j = 0; j < m; j++){				  
			areathanhphan = (j + 1) * tmp[i][j];   
			areamax = max(areamax, areathanhphan); 
		}
	}
	cout << areamax << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

