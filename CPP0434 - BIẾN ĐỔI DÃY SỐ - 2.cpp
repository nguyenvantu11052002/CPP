#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector<int> b(n);
	b[0] = a[0] * a[1];
	b[n - 1] = a[n - 1] * a[n - 2];
	for(int i = 1; i < n - 1; i++){
		b[i] = a[i - 1] * a[i + 1];
	}
	for(int i = 0; i < n; i++){
		cout << b[i] << " ";
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
