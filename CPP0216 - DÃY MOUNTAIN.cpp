#include<bits/stdc++.h>

using namespace std;

int phan1tang(vector<int> a, int l, int vitrimax){
	for(int i = l; i < vitrimax; i++){
		if(a[i] > a[i + 1]) return 0;
	}
	return 1;
}

int phan2giam(vector<int> a, int vitrimax, int r){
	for(int i = vitrimax + 1; i < r; i++){
		if(a[i] < a[i + 1]) return 0;
	}
	return 1;
}

void inraketqua(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int l, r;
	cin >> l >> r;
	int maxx = 0;
	int vitrimax;
	for(int i = l; i <= r; i++){
		if(a[i] > maxx){
			maxx = a[i];
			vitrimax = i;
		}
	}
	//cout << maxx << " " << vitrimax << endl;
	if(phan1tang(a, l, vitrimax)){
		if(phan2giam(a, vitrimax, r)){
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
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
