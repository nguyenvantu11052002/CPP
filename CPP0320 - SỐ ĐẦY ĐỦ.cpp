#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s;
	cin >> s;
	int n = s.size();
	for(int i = 0; i < n; i++){
		if(s[0] == '0' || s[i] < '0' || s[i] > '9'){
			cout << "INVALID" << endl;
			return;
		}
	}
	set<int> st;
	for(int i = 0; i < n; i++){
		st.insert(s[i] - '0');
	}
	if(st.size() == 10) cout << "YES";
	else cout << "NO";
	cout << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}

