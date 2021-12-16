#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s;
	cin >> s;
	int a[26] = {0};
	for(int i = 0; i < s.size(); i++){
		int x = s[i] - 'a';
		a[x]++;
	}
	int max_val = *max_element(a, a + 26);
//	cout << max_val << endl;
	if(s.size() - max_val >= max_val - 1){
		cout << 1;
	}
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
