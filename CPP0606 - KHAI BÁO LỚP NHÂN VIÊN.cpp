#include<bits/stdc++.h>

using namespace std;
#define a() a;

class NhanVien{
	private:
		string ma, ten, gt, ns, dc, mst, nkhd;
	public:
		NhanVien();
		NhanVien(string ten, string gt, string ns, string dc, string mst, string nkhd);
		friend istream& operator >> (istream &, NhanVien &);
		friend ostream& operator << (ostream &, NhanVien );
};

NhanVien::NhanVien(){
	ma = ten = gt = ns = dc = mst = nkhd = "";
}

NhanVien::NhanVien(string ten, string gt, string ns, string dc, string mst, string nkhd){
	ten = ten;
	gt = gt;
	ns = ns;
	dc = dc;
	mst = mst;
	nkhd = nkhd;
}

istream& operator >> (istream &in, NhanVien &a){
	a.ma = "00001";
	getline(in, a.ten);
	in >> a.gt >> a.ns;
	cin.ignore();
	getline(in, a.dc);
	in >> a.mst >> a.nkhd;
	return in;
}

ostream& operator << (ostream &out, NhanVien a){
	out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nkhd;
	return out;
}

int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
