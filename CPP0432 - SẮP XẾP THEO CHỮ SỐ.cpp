#include<bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
	string s1 = a + b;
	string s2 = b + a;
	return s1 > s2;
}

void inraketqua(){
	int n;
	cin >> n;
	string a[n];
	for(auto &x : a){
		cin >> x;
	}
	sort(a, a + n, cmp);
	for(auto x : a){
		cout << x;
	}
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
