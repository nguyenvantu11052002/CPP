#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ten, lop, ns, ma;
	double gpa;
};

void chuanns(string &s){
	if(s[2] != '/') s.insert(0, "0");
	if(s[5] != '/') s.insert(3, "0");
}

void nhapThongTinSV(SinhVien &a){
	a.ma = "N20DCCN001";
	getline(cin, a.ten);
	cin >> a.lop >> a.ns >> a.gpa;
	chuanns(a.ns);
}

void inThongTinSV(SinhVien a){
	cout << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << setprecision(2) << fixed << a.gpa << endl;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
