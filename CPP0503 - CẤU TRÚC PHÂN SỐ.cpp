#include<bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;

long long gcd(long long a, long long b){
	while(b > 0){
		long long x = a % b;
		a = b;
		b = x;
	}
	return a;
}

struct PhanSo{
	long long  tuso, tusomoi;
	long long mauso, mausomoi;
};

void nhap(struct PhanSo &p){
		cin >> p.tuso >> p.mauso;	
}

void rutgon(struct PhanSo &p){
	p.tusomoi = p.tuso/gcd(p.tuso, p.mauso);
	p.mausomoi = p.mauso/gcd(p.tuso, p.mauso);
}
	
void in(struct PhanSo &p){
	cout << p.tusomoi << "/" << p.mausomoi;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
