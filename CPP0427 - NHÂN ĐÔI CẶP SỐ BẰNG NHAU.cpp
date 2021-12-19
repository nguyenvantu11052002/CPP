#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < a.size() - 1; i++){										//2  2  0  4  0  8
		if(a[i + 1] != 0 && a[i] == a[i + 1]){						//4  4  8  0  0  0
			a[i] = 2 * a[i];
			a[i + 1] = 0;
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] != 0) b.push_back(a[i]);
	}
	for(int i = 0; i < b.size(); i++){
		cout << b[i] << " ";
	}
	for(int i = 0; i < n - b.size(); i++){
		cout << 0 << " ";
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
