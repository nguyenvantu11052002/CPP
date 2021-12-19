
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int fibo(int n){
	if(n == 0) return 0;
	if(n == 1 || n == 2) return 1;
	int f1 = 1, f2 = 1, f;
	for(int i = 3; i <= n; i++){
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}

int check(int n){
	int i = 0;
	while(fibo(i) < n) i++;
	if(fibo(i) == n) return n;
	return -1;
}

void inraketqua(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(check(a[i]) != -1) cout << a[i] << " ";
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
