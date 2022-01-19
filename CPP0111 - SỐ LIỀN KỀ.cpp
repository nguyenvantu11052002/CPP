#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

long long check(long long n){
	int p = n % 10;
	n = n/10;
	while(n > 0){
		int d = n % 10;
		n /= 10;
		int result = d - p;
		if(abs(result) == 1) p = d;
		else return 0;
	}
	return 1;
}

void inraketqua(){
	long long n;
	cin >> n;
	if(check(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
