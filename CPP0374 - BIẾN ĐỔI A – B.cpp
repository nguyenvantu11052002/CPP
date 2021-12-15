#include<bits/stdc++.h>

using namespace std;
using ll = long long;
void inraketqua(){
	string s;
	cin >> s;
	int n = s.size();
	int ngat = 0;
	vector<string> v;
	for(int i = 0; i < n - 1; i++){
		// ki tu cuoi cung giong ki tu truoc no;
		if(s[i] == s[i + 1] && i == n - 2){
			v.push_back(s.substr(ngat, n - 1 - ngat + 1));
			break;
		}
		if(s[i] == s[i + 1]){
			continue;
		}
		else{
			v.push_back(s.substr(ngat, i - ngat + 1));
			ngat = i + 1;
		}
		// ki tu cuoi cung khac ki tu truoc no thi them vao v lan cuoi la xong; va cai nay phai dat o vi tri nay vi de else o tren cap nhap ngat = i + 1 tuc la i == n - 1;
		if(i == n - 2 && s[i] != s[i + 1]){
			v.push_back(s.substr(ngat, 1));
		}
	}
	/*for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	cout << "het" << endl;a*/
	int k = 0;
	int res = 0;
	for(int i = v.size() - 1; i >= 0; i--){
		if((v[i][0] == 'A' && k % 2 == 0)|| (v[i][0] == 'B' && k % 2 != 0)) continue;
		if(v[i].size() == 1) res++;
		else{
			res++;
			k++;
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
