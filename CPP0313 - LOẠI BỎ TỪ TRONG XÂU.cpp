#include <bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s, x;
	getline(cin, s);
	cin >> x;
	vector<string> v;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != ' '){
			int p = i;
			while(s[p] != ' ' && p < s.length()) p++;
			v.push_back(s.substr(i, p - i));
			i = p;
		}
	}
	for(int i = 0; i < v.size(); i++){
		if(v[i] != x) cout << v[i] << " ";
	}
}

int main(){
	inraketqua();
	return 0;
}
