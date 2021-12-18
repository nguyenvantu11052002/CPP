#include<bits/stdc++.h>
using namespace std;

int d[1000005];

void sangnto(int n){
	for(int i = 2; i <= n; i++){
		d[i] = 1;
	}
	d[0] = d[1] = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(d[i]){
			for(int j = 2*i; j <= n; j += i){
				d[j] = 0;
			}
		}
	}
}

void inraketqua(){
	int l, r, count = 0;
	cin >> l >> r;
	sangnto(r);
	for(int i = l; i <= r; i++){
		if(d[i] == 1) count++;
	}
	cout << count << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
