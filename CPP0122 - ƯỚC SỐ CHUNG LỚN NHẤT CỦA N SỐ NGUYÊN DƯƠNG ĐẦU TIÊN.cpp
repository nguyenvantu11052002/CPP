#include<iostream>

using namespace std;

long long gcd(long long a, long long b){
    while (b > 0)
    {
        long long x = a % b;
        a = b;
        b = x;
    }
    return a;
}

long long lcm(long long a, long long b){
	return (long long) a * b/gcd(a, b);
}

void inraketqua(){
	long long n;
	cin >> n;
	long long kq = 1;
	for(long long i = 1; i <= n; i++){
		kq = lcm(kq, i);
	}
	cout << kq << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
