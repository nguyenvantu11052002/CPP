#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	pair<int, int> b[n];
	for(int i = 0; i < n; i++){
		int d = abs(x - a[i]);
		b[i].first = d;
		b[i].second = i;
	}
	sort(b, b + n);  				 	//10 5 3 9 2 so 5 xuat hien trc 9 nen b[i] gan x - 5 cung truoc b[i] gan x - 9. sau do sort sap xep uu tien so dung trc thi van dung truoc....
	for(int i = 0; i < n; i++){         // .... trong TH 2 abs do bang nhau
		cout << a[b[i].second] << " "; 
	}
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
