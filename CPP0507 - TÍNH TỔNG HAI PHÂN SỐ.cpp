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
	long long a, b;
	long long tusomoi, mausomoi;
};

void nhap(struct PhanSo &p){
		cin >> p.a >> p.b;	
}

struct PhanSo tong(struct PhanSo &p, struct PhanSo &q){
	struct PhanSo t;
	long long tuso = (p.a * q.b) + (p.b * q.a);
	long long mauso = p.b * q.b;
	t.tusomoi = tuso/gcd(tuso, mauso);
	t.mausomoi = mauso/gcd(tuso, mauso);
	return t;
}
	
void in(struct PhanSo &t){
	cout << t.tusomoi << "/" << t.mausomoi;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
