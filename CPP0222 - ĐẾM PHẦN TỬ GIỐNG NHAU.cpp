#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int a[n][n];
	multiset<int> ms;
	for(int i = 0; i < n; i++){
		set<int> s;
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			s.insert(a[i][j]); // moi hang chi lay cac so khac nhau
		}
		for(auto x : s) ms.insert(x); // them lan luot cac hang chua cac so khac nhau vao 1 day multiset , o bai nay se la 11 2222 3333 456; 
	}
	vector<int> b;
	for(auto x : ms) b.push_back(x); // chuyen ve vector de dem so lan xuat hien cua cac so;
	int res = 0; 
	for(int i = 0; i < b.size(); i++){ // neu de la b.size - 1 thi truong hop 11 2222 3333 thi khi den so 3 thu ba thi dem = 4, i++ lam dung for nen dong 27 if(dem==n) res++ KHONG DUOC THUC HIEN;
		int dem = 1; // dem cai so xuat hien o tat ca cac hang, neu == n thi co nghia la hang nao no cung xuat hien => ok;
		while(b[i] == b[i + 1]){
			dem++;    // het 4 so 2 o test tren la dem = 4, va i dang o vi tri so 2 cuoi cung, sau khi het lenh trong for tai i hien tai thi i nhay sang so 3 dau tien
			i++;
		}
		if(dem == n) res++;
	}
	cout << res << endl;
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
