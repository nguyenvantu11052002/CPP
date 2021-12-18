#include<bits/stdc++.h>

using namespace std;

long long res(int a[], int n){
	if(*max_element(a, a + n) <= 0) return *max_element(a, a + n);
	long long res = 0;
	long long ss = 0;
	for(int i = 0; i < n; i++){
		ss += a[i];
		if(ss < 0) ss = 0; // phai gan ss = 0 khi ss < 0 , vi neu khong lam vay se anh huong den so duong tiep theo 
		res = max(res, ss); // vi du day sau : 1 2 3 -9 15 -100; thi neu khong gan ss = 0 thi het -9 kq = -3 se cong tiep lam giam 15 thanh 12 nen sai
	}
	return res;
}

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << res(a, n) << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
