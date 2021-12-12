#include<bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
	if(a.size() == b.size()) return a > b;
	return a.size() > b.size();
}

void inraketqua(){
	int n;
	cin >> n;
	string s[n];
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	sort(s, s + n, cmp);
/*	for(int i = 0; i < n; i++){
		cout << s[i] << " ";
	}
	cout << endl;*/
	int res = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(s[i] == s[j]){
				res += 2;
				continue;
			}
			if(s[i].find(s[j]) != string::npos){
				res++;
				//cout << s[i] << " " << s[j] << " " << res << endl;
			}
		}
	}
	cout << res << endl;
}

int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
