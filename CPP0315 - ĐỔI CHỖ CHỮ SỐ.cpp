#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s;
	cin >> s;
	int i = s.size() - 2;
	while(s[i] <= s[i + 1] && i >= 0){
		i--;
	}
	if(i == -1){
		cout << -1 << endl;
		return;
	}
	int j = s.size() - 1;
	while(s[i] <= s[j] || s[j - 1] == s[j] && s[i] > s[j]){  // s[i] > s[j] la du, vi neu co dau = thi da bo qua o s[i] <= s[j] roi.
		j--;
	}
	swap(s[i], s[j]);  // y tuong bai nay la duyet tu cuoi day duyet len dau, het doan giam thi luu vao i, tuong tu voi j nhung phai bo qua s[j] == s[j-1]
	if(s[0] == '0'){  //          vi du day sau 2 3 4 7 6 5 3 3 8 9 ta thay s[i] = 5 va s[j] = so 3 dau tien
		cout << -1 << endl;
	}
	else cout << s << endl;
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
