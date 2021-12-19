#include<bits/stdc++.h>

using namespace std;

void khoitao(int a[], int n){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}

void sinh(int a[], int n, int &ok){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}

void inraketqua(){
	int n;
	cin >> n;
	int a[25];
	int ok = 1;
	khoitao(a, n);
	while(ok){
		for(int i = 1; i <= n; i++){
			cout << a[i];
		}
		cout << " ";
		sinh(a, n, ok);
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
