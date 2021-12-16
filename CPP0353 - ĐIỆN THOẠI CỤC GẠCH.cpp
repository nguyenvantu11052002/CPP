#include<bits/stdc++.h>

using namespace std;

char chuyenint(char c){
	if(c >= 'a' && c <= 'c') return '2';
	if(c >= 'd' && c <= 'f') return '3';
	if(c >= 'g' && c <= 'i') return '4';
	if(c >= 'j' && c <= 'l') return '5';
	if(c >= 'm' && c <= 'o') return '6';
	if(c >= 'p' && c <= 's') return '7';
	if(c >= 't' && c <= 'v') return '8';
	if(c >= 'w' && c <= 'z') return '9';
}

int check(string res){
	string s = res;
	reverse(res.begin(), res.end());
	if(res != s) return 0;
	return 1;
}

void inraketqua(){
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	string res = "";
	for(int i = 0; i < s.size(); i++){
		res += chuyenint(s[i]);
	}
	if(check(res)) cout << "YES";
	else cout << "NO";
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

