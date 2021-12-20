#include<bits/stdc++.h>

using namespace std;
#define a() a;

class SinhVien{
	private:
		string ma, ten, lop, ns;
		double gpa;
	public:
		SinhVien();
		SinhVien(string ma, string ten, string lop, string ns, double gpa);
		friend istream& operator >> (istream &, SinhVien &);
		friend ostream& operator << (ostream &, SinhVien);
};

SinhVien::SinhVien(){
	ma = ten = lop = ns = "";
	gpa = 0;
}

SinhVien::SinhVien(string ma, string ten, string lop, string ns, double gpa){
	ma = ma;
	ten = ten;
	lop = lop;
	ns = ns;
	gpa = gpa;
}

istream& operator >> (istream &in, SinhVien &a){
	a.ma = "B20DCCN001";
	getline(in, a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	if(a.ns[2] != '/') a.ns.insert(0, "0");
	if(a.ns[5] != '/') a.ns.insert(3, "0");
	return in;
}

ostream& operator << (ostream &out, SinhVien a){
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << setprecision(2) << fixed << a.gpa;
	return out;
}

int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
