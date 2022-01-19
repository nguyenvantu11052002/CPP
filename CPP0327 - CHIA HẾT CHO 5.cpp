#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s;
	cin >> s;
	int lt = 1;
	int r = (s[s.length() - 1] - '0') % 5;
	for(int i = s.length() - 2; i >= 0; i--){
		lt *= 2;
		lt %= 5;
		r += (s[i] - '0') * lt;
		r %= 5;
	}
	if(r % 5 == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
