#include<bits/stdc++.h>

using namespace std;

long long sumcs(long long n){
	long long res = 0;
	while(n > 0){
		int d = n % 10;
		n /= 10;
		res += d;
	}
	return res;
}

int check(string s){
	long long res = 0;
	for(int i = 0; i < s.size(); i++){
		res = res + (s[i] - '0');
	}
	while(res > 9){
		res = sumcs(res);
	}
	if(res == 9) return 1;
	return 0;
}

void inraketqua(){
	string s;
	cin >> s;
	if(check(s)) cout << 1;
	else cout << 0;
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
