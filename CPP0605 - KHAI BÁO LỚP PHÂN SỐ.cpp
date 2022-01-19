#include<bits/stdc++.h>

using namespace std;

using ll = long long;

class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(ll tu, ll mau);
		friend istream& operator >> (istream &, PhanSo &);
		friend ostream& operator << (ostream &, PhanSo);
		void rutgon();
};

PhanSo::PhanSo(ll ttt, ll mmm){
	this->tu = tu;
	this->mau = mau;
}

istream& operator >> (istream& in, PhanSo &a){
	in >> a.tu >> a.mau;
	return in;
}

ostream& operator << (ostream& out, PhanSo a){
	out << a.tu << "/" << a.mau;
	return out;
}

void PhanSo::rutgon(){
	ll g = __gcd(tu, mau);
	tu /= g;
	mau /= g;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
