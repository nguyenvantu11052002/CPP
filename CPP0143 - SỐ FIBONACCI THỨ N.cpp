#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

long long fibonacci(long long n){
	if(n == 0) return 0;
	if(n == 1 || n == 2) return 1;
	long long f1 = 1, f2 = 1, f;
	for(long long i = 3; i <= n; i++){
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}

void inraketqua(){
	long long n;
	cin >> n;
	cout << fibonacci(n) << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
