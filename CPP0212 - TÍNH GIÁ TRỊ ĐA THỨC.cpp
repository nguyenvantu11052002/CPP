#include<bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;

void inraketqua(){
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	reverse(a.begin(), a.end());
	long long result = 0, t = 1;
	for(int i = 0; i < n; i++){
		result = (result + 	t * a[i]) % mod;
		t = (t * x) % mod;
	}
	cout << result << endl;
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
