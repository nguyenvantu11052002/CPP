#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n;
	string so;
	cin >> n >> so;
	string res = "";
	for(int i = 0; i < n; i++){
		switch(so[i]){
			case '2':
				res += "2";
				break;
			case '3':
				res += "3";
				break;
			case '4':
				res += "322";
				break;
			case '5':
				res += "5";
				break;
			case '6':
				res += "53";
				break;
			case '7':
				res += "7";
				break;
			case '8':
				res += "7222";
				break;
			case '9':
				res += "3372";
				break;
			default : 
				continue;
		}
	}
	sort(res.rbegin(), res.rend());
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
