#include<bits/stdc++.h>

using namespace std;

string solve(string s1, string s2){
	int len1 = s1.size();
	int len2 = s2.size();
	int len = len1 + len2;
	vector<int> a, b;
	for(int i = 0; i < len1; i++){
		a.push_back(s1[i] - '0');
	}
	for(int i = 0; i < len2; i++){
		b.push_back(s2[i] - '0');
	}
	vector<vector<int> > res(len2);
	//moi res la 1 hang;
	int index = 0;
	for(int i = len2 - 1; i >= 0; i--){
		int t = 0;
		while(t < index){
			res[index].push_back(0);
			t++;
		}
		int nho = 0, so = 0;
		for(int j = len1 - 1; j >= 0; j--){
			so = a[j] * b[i] + nho;
			res[index].push_back(so % 10);
			nho = so/10;
		}
		if(nho > 0) res[index].push_back(nho);
		while(res[index].size() < len){
			res[index].push_back(0);
		}
		reverse(res[index].begin(), res[index].end());
		index++;
	}
	// xau luu kq;
	string ans = "";
	int nho = 0;
	for(int j = len - 1; j >= 0; j--){
		int so = nho;
		for(int i = 0; i < len2; i++){
			so += res[i][j];
		}
		ans = char(so % 10 + '0') + ans;
		nho = so/10;
	}
	if(nho > 0) ans = char(nho + '0') + ans;
	// xoa so 0 o dau;
	while(ans[0] == '0'){
		ans.erase(ans.begin());
	}
	return ans;
}

void inraketqua(){
	string a, b;
	cin >> a >> b;
	cout << solve(a, b) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
