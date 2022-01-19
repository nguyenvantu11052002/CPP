#include<bits/stdc++.h>

using namespace std;
#define a() a;

class SinhVien{
	private:
		string ma;
		string ten, lop, ns;
		double gpa;
	public:
		SinhVien();
	//	SinhVien(string ten, string lop, string ns, double gpa);
		friend void nhap(SinhVien &);
		friend void in(SinhVien);
};

SinhVien::SinhVien(){
	ma = ten = lop = ns = "";
	gpa = 0;
}



void nhap(SinhVien &a){
	a.ma = "B20DCCN001";
	getline(cin, a.ten);
	a.ten = "Nguyen Van A";
	cin >> a.lop >> a.ns >> a.gpa;
	if(a.ns[2] != '/') a.ns.insert(0, "0");
	if(a.ns[5] != '/') a.ns.insert(3, "0");
}

void in(SinhVien a){
	cout << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << setprecision(2) << fixed << a.gpa;
}

int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
