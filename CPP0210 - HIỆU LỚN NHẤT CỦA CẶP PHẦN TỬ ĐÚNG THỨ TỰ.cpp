#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	vector<int> a(n + 1);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int r = - 1;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] > a[i]) r = max(r, a[j] - a[i]); // neu a[j] < a[i] thi a[j] khong thuoc day dang xet, day con cua bai nay la day tang (khong can lien tuc);
		}
	}
	cout << r << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
