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
	long long x, y, z, n;
	cin >> x >> y >> z >> n;
	long long a = pow(10, n - 1);
	long long b = pow(10, n) - 1;
	long long lcmxy = (long long) x * y/ gcd(x, y);
	long long lcmxyz = (long long) lcmxy * z/ gcd(lcmxy, z);
//	cout << lcmxyz << endl;
	if(a % lcmxyz == 0){
		cout << a << endl;
		return;
	}
	long long p = a/lcmxyz;
	long long result = lcmxyz*(p + 1);
	if(result <= b) cout << result;
	else cout << -1;
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
