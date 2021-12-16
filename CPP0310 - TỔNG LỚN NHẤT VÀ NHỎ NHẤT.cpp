#include<bits/stdc++.h>

using namespace std;

long long chuyenstringvelonglong(string v){
	int n = v.size();
	long long res = 0;
	for(int i = 0; i < n; i++){
		res = res * 10 + (v[i] - '0');
	}
	return res;
}

long long maxx(string v1, string v2){
	for(int i = 0; i < v1.size(); i++){
		if(v1[i] == '5') v1[i] = '6';
	}
	for(int i = 0; i < v2.size(); i++){
		if(v2[i] == '5') v2[i] = '6';
	}
	return chuyenstringvelonglong(v1) + chuyenstringvelonglong(v2);;
}

long long minn(string v1, string v2){
	for(int i = 0; i < v1.size(); i++){
		if(v1[i] == '6') v1[i] = '5';
	}
	for(int i = 0; i < v2.size(); i++){
		if(v2[i] == '6') v2[i] = '5';
	}
	return chuyenstringvelonglong(v1) + chuyenstringvelonglong(v2);;
}


void inraketqua(){
	string s, str;
	getline(cin, str);
	stringstream ss(str);
	vector<string> v;
	while(ss >> s){
		v.push_back(s);
	}
	cout << minn(v[0], v[1]) << " " << maxx(v[0], v[1]) << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	cin.ignore();
	while(k--){
		inraketqua();
	}
	return 0;
}
