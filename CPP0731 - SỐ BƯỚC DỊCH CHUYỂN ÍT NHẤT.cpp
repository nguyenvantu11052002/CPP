#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(a[0] == 0){
		cout << -1 << endl;
		return;
	}
	int jump[n]; // so buoc it nhat
	jump[0] = 0;
	for(int i = 1; i < n; i++){                //                                    0 1 2 3 4 5 6 7 8 9 10;
		jump[i] = INT_MAX; // de toi uu buoc nhay tu j sang i; chay test tay de hieu 1 3 5 8 9 2 6 7 6 8 9; tai a[i] == 8 no da cap nhap jump[i] = jump tai a[i] == 3 , + 1 == 2 roi;
		for(int j = 0; j < i; j++){                  //                 jump     :   0 1 2 2 2 ..............                 // tranh viec cap nhap jump tai a[i] == 8 len 3;
			if(j + a[j] >= i && jump[j] != INT_MAX){ // tuc la tu vi tri i co the nhay toi vi tri j duoc
				jump[i] = min(jump[i], jump[j] + 1); // tu i nhay sang j thi muon den duoc i thi = so buoc muon den duoc j + 1;
			}
		}
	}
	if(jump[n-1] != INT_MAX) cout << jump[n - 1] << endl;
	else cout << -1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
