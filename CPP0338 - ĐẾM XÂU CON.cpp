#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s;
	cin >> s;
	int k;
	cin >> k;
	int ans = 0;
	for(int i = 0; i < s.size(); i++){
		int a[256] = {0};
		int dem = 0;
		for(int j = i; j < s.size(); j++){
			if(a[s[j]] == 0) dem++;
			a[s[j]]++;
			if(dem == k) ans++; // xau con a b c, k = 2, den s[j] = b la dem duoc 1 xau con co 2 ki tu khac nhau roi.
			if(dem > k) break;
		}
	}
	cout << ans << endl;
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
