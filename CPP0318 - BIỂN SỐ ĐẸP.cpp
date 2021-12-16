#include<bits/stdc++.h>

using namespace std;

int check(string s){
	if(s[0] < s[1] && s[1] < s[2] && s[2] < s[3] && s[3] < s[4]) return 1;
	if(s[0] == s[1] && s[1] == s[2] && s[2] == s[3] && s[3] == s[4]) return 1;
	if(s[0] == s[1] && s[1] == s[2] && s[3] == s[4]) return 1;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != '6' && s[i] != '8') return 0;
	}
	return 1;
}

void inraketqua(){
	string s;
	cin >> s;  // 5 6 7 9 10
	string ss = "";
	ss = ss + s[5] + s[6] + s[7] + s[9] + s[10];
//	cout << ss << endl;
	if(check(ss)) cout << "YES\n";
	else cout << "NO\n";
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
