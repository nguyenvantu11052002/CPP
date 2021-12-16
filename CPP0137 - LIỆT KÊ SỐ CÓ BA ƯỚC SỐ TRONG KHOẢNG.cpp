#include<bits/stdc++.h>

using namespace std;

int snt(long long n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void inraketqua(){
	long long l, r, count = 0;
	cin >> l >> r;
	for(int i = sqrt(l); i <= sqrt(r); i++){
		if(snt(i)) count++;
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


