#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s;
	getline(cin, s);
	int n = s.size();
	vector<string> v;
	for(int i = 0; i < n; i++){
		if(s[i] != ' '){
			int p = i;
			while(s[p] != ' ' && p < n) p++;
			v.push_back(s.substr(i, p - i));
			i = p;
		}
	}
	for(int i = v.size() - 1; i >=  0; i--){
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){
	int k;
	cin >> k;
	cin.ignore();
	while(k--){
		inraketqua();
	}
	return 0;
}
