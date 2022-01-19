#include<bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;

void inraketqua(){
	int n, count = 0;
	cin >> n;
	int m = n;
	cin.ignore();
	vector<string> s(n);
	for(int i = 0; i < n; i++){
		getline(cin, s[i]);
	}
	for(int i = 0; i < n; i++){
		int check = 1;
		for(int j = i - 1; j >= 0; j--){
			if(s[i] == s[j]){
				check = 0;
				break;
			}
		}
		if(check == 1) count++;
	}
	cout << count << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	inraketqua();
	return 0;
}
