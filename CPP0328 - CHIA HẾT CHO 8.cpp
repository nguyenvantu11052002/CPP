#include<bits/stdc++.h>

using namespace std;

int solve(string s, int k){
	int ans = 0;
	for(int i = 0; i < s.size(); i++){
		int res = 0;
		for(int j = i; j < s.size(); j++){ // xau con thi phai 2 for moi liet ke duoc all xau con chu; 1 for sao du;
			int d = s[j] - '0';
			res = (res * 10 + d) % k;
			if(res == 0) ans++;
		}
	}
	return ans;
}

void inraketqua(){
	string s;
	cin >> s;
	int ans = solve(s, 8) - solve(s, 24); // chia het cho 8 - nhung so chia het cho 24( vi nhung so chia het cho 24 mac du chia het cho 8 nhung cung chia het cho 3);
	// bai nay y tuong nhu sau : dau tien cu tim all so chia het cho 8, sau do laai bo cac vi tri chia het cho 24 trong nhung so vua chia het cho 8 la ok;
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

