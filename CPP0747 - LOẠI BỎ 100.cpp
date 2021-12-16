#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s;
	cin >> s;
	int ans = 0;
	for(int i = 0; i < s.size() - 2; i++){
		if(s == "") break;
		if(s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0'){
			ans += 3;
			s.erase(i, 3);
			i = -1;
		}
	}
	if(ans > 0) cout << ans << endl;
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

