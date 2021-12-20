#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

long long gcd(long long a, long long b){
	while(b > 0){
		long long x = a % b;
		a = b;
		b = x;
	}
	return a;
}

void inraketqua(){
	long long a, x, y;
	cin >> a >> x >> y;
	long long result = gcd(x, y);
	for(int i = 0; i < result; i++){
		cout << a;
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
