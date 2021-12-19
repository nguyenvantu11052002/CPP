#include<bits/stdc++.h>

using namespace std;

int n, k, a[100], ok;

void khoitao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	/// max cua moi phan tu thi i la : n - k + i; 5C3 thi a1a2a3 thi a3 max la 5- 3 + 3 = 5, a2 max la 5 - 3 + 2 = 4;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){    		// 1 2 3 7 8 9   : 9C6
		ok = 0;         // 1 2 4 5 6 7
	}
	else{
		a[i] += 1;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}

void inraketqua(){
	cin >> n >> k;
	ok = 1;
	khoitao();
	while(ok){
		for(int i = 1; i <= k; i++){
			cout << a[i];
		}
		cout << " ";
		sinh();
	}
	cout << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
