#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tu;
	long long mau;
};

void process(struct PhanSo a, struct PhanSo b){
	long long tsC = (a.tu * b.mau + a.mau * b.tu) * (a.tu * b.mau + a.mau * b.tu);
	long long msC = (a.mau * b.mau) * (a.mau * b.mau);
	long long ucln = __gcd(tsC, msC);
	long long intsc = tsC/ucln;
	long long inmsc = msC/ucln;
	cout << intsc << "/" << inmsc << " ";
	long long tsd = a.tu * b.tu * tsC;
	long long msd = a.mau * b.mau * msC;
	long long ucln2 = __gcd(tsd, msd);
	long long intsd = tsd/ucln2;
	long long inmsd = msd/ucln2;
	cout << intsd << "/" << inmsd << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
