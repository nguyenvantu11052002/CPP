#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int gcd(int a, int b){
	if(a % b == 0) return b;
	return gcd(b, a % b);
}

void inraketqua(){
	int x, t = 0;
	cin >> x;
	for(int i = 1; i < x; i++){
		if(gcd(i, x) == 1) t++;
	}
	if(snt(t)) cout << 1;
	else cout << 0;
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
CPP0142 - NGUYÊN TỐ CÙNG NHAU
