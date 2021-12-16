#include<bits/stdc++.h>

using namespace std;

int dem = 0;

class NhanVien{
	private:
		string ma, ten, gt, ns, dc, thue, hd;
	public:
		NhanVien();
		friend istream& operator >> (istream&, NhanVien &);
		friend ostream& operator << (ostream&, NhanVien);
};

NhanVien::NhanVien(){
	ma = ten = gt = ns = dc = thue = hd = "";
}

istream& operator >> (istream &in, NhanVien &a){
	dem++;
	a.ma += string(5 - to_string(dem).size(), '0') + to_string(dem);
	cin.ignore();
	getline(in, a.ten);
	in >> a.gt >> a.ns;
	cin.ignore();
	getline(in, a.dc);
	in >> a.thue >> a.hd;
	return in;
}

ostream& operator << (ostream &out, NhanVien a){
	cout << a.ma << " " << a.ten << " " << a.gt << " " <<  a.ns << " " << a.dc << " " << a.thue << " " << a.hd << endl;
	return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
