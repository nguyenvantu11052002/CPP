#include<bits/stdc++.h>

using namespace std;

int a[100], n, ok;

void khoitao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0){
		ok = 0;
	}
	else a[i] = 1;
}

void inraketqua(){
	cin >> n;
	khoitao();
	ok = 1;
	while(ok){
		for(int i = 1; i <= n; i++){
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
