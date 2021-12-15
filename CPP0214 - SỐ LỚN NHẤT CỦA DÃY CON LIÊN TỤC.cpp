#include<bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

void inraketqua(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	multiset<int> ms;
	for(int i = 0; i < k; i++){
		ms.insert(a[i]);
	}
	for(int i = k; i < n; i++){
		cout << *ms.rbegin() << " ";
		ms.erase(ms.find(a[i - k]));
		ms.insert(a[i]);
	}
	cout << *ms.rbegin() << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
