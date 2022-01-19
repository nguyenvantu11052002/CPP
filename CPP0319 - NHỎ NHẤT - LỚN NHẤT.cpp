#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int m, s;
	cin >> m >> s;
	if(s > 9 * m || (s == 0 && m > 1)){
		cout << -1 << " " << -1;
		return;
	}
	if(s == 0 && m == 1){
		cout << 0 << " " << 0;
		return;
	}
	int lon[m];
	int be[m];
	int tmp = s;
	for(int i = 0; i < m; i++){
		if(s >= 9){
			lon[i] = 9;
			s -= 9;
		}
		else{
			lon[i] = s;
			s = 0;
		}
	}
	tmp--;
	for(int i = m - 1; i >= 0; i--){
		if(tmp >= 9){
			be[i] = 9;
			tmp -= 9;
		}
		else{
			be[i] = tmp;
			tmp = 0;
		}
	}
	be[0] += 1;
	for(int i = 0; i < m; i++){
		cout << be[i];
	}
	cout << " ";
	for(int i = 0; i < m; i++){
		cout << lon[i];
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	inraketqua();
	return 0;
}
