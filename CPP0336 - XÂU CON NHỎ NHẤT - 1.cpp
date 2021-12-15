#include<bits/stdc++.h>

using namespace std;

void inraketqua(){ // de hieu ro thi nen chay code ra giay la hieu;
	string s1, s2;
	cin >> s1 >> s2;
	int dem1[256] = {0};
	int dem2[256] = {0};
	for(auto x : s2) dem2[x]++;
	int cnt = 0; // dem du ki tu trong s2;
	int l = 0; // l co nhiem vu thu nho cua so;
	int index = -1; // dung l cung duoc nhung se thieu truong hop in ra -1 nen dung index lam trung gian;
	int ans = INT_MAX;
	for(int i = 0; i < s1.size(); i++){
		dem1[s1[i]]++;
		if(dem1[s1[i]] <= dem2[s1[i]]) cnt++; // khi cnt == s2.size() thi bat dau thu nho cua so , nhung cua so sau khi duoc thu nho van luon dam bao rang .....
		if(cnt == s2.size()){                 // ......co day du ki tu trong xau s2 nen dem1[x] luon > dem2[x] trong nhung lan i++ de dem dem1[s1[i]]++.......
			while(dem1[s1[l]] > dem2[s1[l]]){ // ...... do ddos cnt sau lan dau tien thi luon luon == s2.size(), if o dong 16 luon xay ra;	
				dem1[s1[l]]--;
				l++;
			}
			if(i - l + 1 < ans){
				ans = i - l + 1;
				index = l;
			}
		}
	}
	if(index == -1) cout << -1 << endl;
	else cout << s1.substr(index, ans) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
