#include<bits/stdc++.h>

using namespace std;

void chuyeninthuong(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	map<string, int> ms;
	cin.ignore();
	while(k--){
		string s;
		getline(cin, s);
		chuyeninthuong(s);
		stringstream ss(s);
		string token;
		vector<string> v;
		while(ss >> token){
			v.push_back(token);
		}
		int m = v.size();
		string res = "";
		res = res + v[m - 1];
		for(int i = 0; i < m - 1; i++){
			res = res + v[i][0];
		}
		if(ms[res] == 0){
			cout << res << "@ptit.edu.vn" << endl;
		}
		else{
			cout << res << ms[res] + 1 << "@ptit.edu.vn" << endl;
		}
		ms[res]++;
	}
	return 0;
}
