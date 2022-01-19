#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int check(long long n){
	long long m = n;
	long long sum = 0;
	while(n > 0){
		int d = n % 10;
		n /= 10;
		sum = sum*10 + d;
	}
	if(sum != m) return 0;
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
