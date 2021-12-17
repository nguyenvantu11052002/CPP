#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int k, x;
	cin >> k >> x;
	auto it = lower_bound(a.begin(), a.end(), x);
	int chiso = it - a.begin();
	for(int i = k/2; i >= 1; i--){
		cout << a[chiso - i] << " ";
	}
	if(a[chiso] == x) chiso++;
	for(int i = 0; i < k/2; i++){
		cout << a[chiso + i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
