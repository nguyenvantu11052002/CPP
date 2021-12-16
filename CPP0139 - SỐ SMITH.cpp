#include<bits/stdc++.h>

using namespace std;

int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int sumcs(int n){
	int sum = 0;
	while(n > 0){
		int d = n % 10;
		n /= 10;
		sum += d;
	}
	return sum;
}

int sumcstsnt(int n){
	int sum = 0;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			sum += sumcs(i);
			n /= i;
		}
	}
	if(n > 1) sum += sumcs(n);
	return sum;
}

int check(int n){
	if(snt(n)) return 0;
	if(sumcs(n) != sumcstsnt(n)) return 0;
	return 1;
}

void inraketqua(){
	int n;
	cin >> n;
	if(check(n)) cout << "YES";
	else cout << "NO";
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
