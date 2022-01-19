#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	vector<vector<int> > a(n, vector<int> (n));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		if(i % 2 == 0){
			for(int j = 0; j < n; j++) cout << a[i][j] << " ";
		}
		else{
			for(int j = n - 1; j >= 0; j--) cout << a[i][j] << " ";
		}
	}
	cout << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
