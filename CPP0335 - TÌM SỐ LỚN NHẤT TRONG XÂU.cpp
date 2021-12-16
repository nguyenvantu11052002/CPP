#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s;
	cin >> s;
	int sum = 0;
	int res = INT_MIN;
	for(int i = 0; i < s.size(); i++){
		if(isdigit(s[i])){
			sum = sum * 10 + (s[i] - '0');
		}
		else{
			res = max(res, sum);
			sum = 0;
		}
	}
	res = max(res, sum);
	cout << res << endl;
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
