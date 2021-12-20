#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string n;
	long long m;
	cin >> n >> m;
	int a = n.size();
	long long res = 0;
	for(int i = 0; i < a; i++){
		int d = n[i] - '0';
		res = (res * 10 + d) % m;
	}
	cout << res << endl;
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
